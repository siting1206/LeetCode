class Solution {
public:
    vector<int> topo_sort(vector<vector<int>> &adj, vector<int> &deg, int sz) {
        // Kahn's algorithm
        queue<int> q;
        for(int i=0; i<sz; i++){
            if(deg[i]==0) q.push(i);
        }
        vector<int> res;
        while(!q.empty()){
            int x=q.front();
            q.pop();
            res.push_back(x);
            for(auto y:adj[x]){ // check x has next groups/items or not
                deg[y]--;
                if(deg[y]==0) q.push(y);
            }
        }
        for(int i=0; i<sz; i++){
            if(deg[i]>0) return {}; // no solution
        }
        return res;
    }

    vector<int> sortItems(int n, int m, vector<int>& group, vector<vector<int>>& beforeItems) {
        // each single item(Group==-1) is a group by itself
        for(auto &g: group){
            if(g==-1) g = m++;
        }
        // build the adjacent lists
        vector<vector<int>> adj_group(m), adj_item(n);
        vector<int> deg_group(m, 0), deg_item(n, 0);
        for(int i=0; i<n; i++){
            int to_i = group[i];
            for(int from: beforeItems[i]){
                int from_j=group[from];
                if(to_i!=from_j){
                    adj_group[from_j].push_back(to_i);
                    deg_group[to_i]++;
                }
                adj_item[from].push_back(i);
                deg_item[i]++;
            }
        }

        vector<int> sort_group=topo_sort(adj_group, deg_group, m);
        vector<int> sort_item=topo_sort(adj_item, deg_item, n);
        if(sort_group.empty() || sort_item.empty()) return {}; // no solution

        // sort the elements in each group
        vector<vector<int>> item_gp(m);
        for(auto i: sort_item)
            item_gp[group[i]].push_back(i);

        // sort the elements among groups
        vector<int> ans;
        for(auto i: sort_group){
            for(auto item: item_gp[i]){
                ans.push_back(item);
            }
        }

        return ans;
    }
};
