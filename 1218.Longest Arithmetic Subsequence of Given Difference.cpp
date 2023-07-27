class Solution {
public:
    int longestSubsequence(vector<int>& arr, int diff) {
        unordered_map<int, int> dp;  // [arr's element|times]
        int ans=0;
        for(auto a: arr){
            int times=0;
            if(dp.count(a-diff)) times = dp[a-diff];

            dp[a] = times+1;
            ans = max(ans, dp[a]);
        }
        return ans;

    }
};
