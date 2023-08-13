class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rs=size(grid), cs=size(grid[0]), ans=0;
        for(int i=0; i<rs; i++){
            for(int j=0; j<cs; j++){
                if(grid[i][j]<0){
                    ans += cs-j;
                    break;
                }
            }
        }
        return ans;
    }
};
