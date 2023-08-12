class Solution {
public:
    int minPathSum(vector<vector<int>>& g) {
        int rs=size(g), cs=size(g[0]);
        for(int i=0; i<rs; i++){
            for(int j=0; j<cs; j++){
                if(i==0 && j==0) continue;
                else if(i==0) g[i][j] += g[i][j-1];
                else if(j==0) g[i][j] += g[i-1][j];
                else g[i][j] += min(g[i-1][j], g[i][j-1]);
            }
        }
        return g[rs-1][cs-1];
    }
};
