class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int rs=size(mat), cs=size(mat[0]);
        vector<vector<int>> dp(rs, vector<int>(cs, INT_MAX-1));
        for (int i=0; i<rs; i++){ // from left-top to right down
            for (int j=0; j<cs; j++){
                if(mat[i][j]==0) dp[i][j] = 0;
                else {
                    if(i) dp[i][j] = min(dp[i][j], dp[i-1][j] + 1);
                    if(j) dp[i][j] = min(dp[i][j], dp[i][j-1] + 1);
                }
            }
        }
        for (int i=rs-1; i>=0; i--){ // from right down to left top
            for (int j=cs-1; j>=0; j--){
                if(i<rs-1) dp[i][j] = min(dp[i][j], dp[i+1][j] + 1);
                if(j<cs-1) dp[i][j] = min(dp[i][j], dp[i][j+1] + 1);
            }
        }
        return dp;
    }
};
