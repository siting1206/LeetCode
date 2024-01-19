class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        if(size(matrix)==1) return matrix[0][0];

        int n = size(matrix), ans = INT_MAX;
        vector<vector<int>> dp(matrix);
        for(int i=n-2; i>=0; i--){
            for(int j=0; j<n; j++){
                int minPath = dp[i+1][j];
                if(j>0) minPath = min(minPath, dp[i+1][j-1]);
                if(j<n-1) minPath = min(minPath, dp[i+1][j+1]);
                dp[i][j] += minPath;
            }
        }

        for(auto num:dp[0]) ans = min(ans, num);
        return ans;
    }
};
