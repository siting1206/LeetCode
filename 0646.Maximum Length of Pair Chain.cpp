class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        // Longest Increasing Subsequence problem
        int n = size(pairs);
        vector<int> dp(n, 1);
        sort(pairs.begin(), pairs.end());

        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                if(pairs[j][1] < pairs[i][0]){
                    dp[i] = max(dp[i], dp[j]+1);
                }
            }
        }
        return dp[n-1];
    }
};
