class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& g) {
        int rs=size(g), cs=size(g[0]);
        if(g[0][0]==1 || g[rs-1][cs-1]==1) return 0;
        for(int i=0; i<rs; i++){
            for(int j=0; j<cs; j++){
                if(i==0 && j==0) g[i][j] = 1;
                else if(g[i][j]) g[i][j]=0;
                else if (i==0) g[i][j] = g[i][j-1];
                else if (j==0) g[i][j] = g[i-1][j];
                else g[i][j] = g[i-1][j] + g[i][j-1];
            }
        }
        return g[rs-1][cs-1];
    }
};
