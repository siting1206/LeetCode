class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n = size(stones), d;
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        dp[0][0] = true;
        for(int i=1; i<n; i++){
            for(int j=i-1; j>=0; j--){
                d = stones[i]-stones[j];
                if(d-j > 1) break;
                dp[i][d] = dp[j][d-1] || dp[j][d] || dp[j][d+1];
                if(i==n-1 && dp[i][d]) return true;
            }
        }
        return false;
    }
};
