class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<unordered_set<int>> adj(n);
        for(auto &r: roads){
            adj[r[0]].insert(r[1]);
            adj[r[1]].insert(r[0]);
        }

        int mx = 0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int total = size(adj[i])+size(adj[j]);
                if(adj[i].count(j)) total--;  // removed the repeated road
                mx = max(mx, total);
            }
        }
        return mx;
    }
};
