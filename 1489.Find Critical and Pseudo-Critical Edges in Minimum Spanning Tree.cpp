// Kruskal's Algorithm

class UnionFind {
public:
    vector<int> parent;
    UnionFind(int n){
        parent.resize(n);
        for(int i=0; i<n; i++) parent[i] = i;
    }

    int findParent(int p){
        if(parent[p]==p) return p;
        return parent[p] = findParent(parent[p]);
    }

    void Union(int u, int v){
        int pu = findParent(u), pv = findParent(v);
        parent[pu] = pv;
    }
};

class Solution {
public:
    static bool cmp(vector<int>&a, vector<int>&b){
        return a[2]<b[2];
    }
    vector<vector<int>> findCriticalAndPseudoCriticalEdges(int n, vector<vector<int>>& edges) {
        vector<int> critical, pscritical;
        // Assign a value to each edge. That is what will be printed.
        for(int i=0; i<size(edges); i++) edges[i].push_back(i);

        // To form a MST using Kruskals, sort edges by their weights
        sort(edges.begin(), edges.end(), cmp);

        // 3. Perform Kruskals. To detect Cycle use Union find.
        int mstwt = findMST(n, edges, -1, -1);
        for(int i=0; i<size(edges); i++){

            // Check for critical edges by removing each edge and finding the MST.
            // If the new MST > original MST it means that removing this edge increases the MST.
            // Hence this is a critical edge
            if(mstwt<findMST(n, edges, i, -1))
                critical.push_back(edges[i][3]);

            // For checking pseudo critical edges, include this edge in MST formation.
            // If new MST == original MST then this is a pseudo critcal edge.
            else if(mstwt==findMST(n, edges, -1, i))
                pscritical.push_back(edges[i][3]);
        }
        return {critical, pscritical};
    }

private:
    int findMST(int &n, vector<vector<int>> &edges, int block, int e){
        UnionFind uf(n);
        int weight = 0;
        if(e!=-1){
            weight += edges[e][2];
            uf.Union(edges[e][0], edges[e][1]);
        }

        for(int i=0; i<size(edges); i++){
            if(i==block) continue;

            // If it dosen't form a cycle include that edge.
            // Since they are sorted, it is assured that we get the MST
            if(uf.findParent(edges[i][0])==uf.findParent(edges[i][1])) continue;
            uf.Union(edges[i][0], edges[i][1]);
            weight += edges[i][2];
        }

        // Check if all vertices are included then only it is MST.
        for(int i=0; i<n; i++){
            if(uf.findParent(i)!=uf.findParent(0)) return INT_MAX;
        }
        return weight;
    }
};
