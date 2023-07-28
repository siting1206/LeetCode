class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
        int sz = size(nums);
        vector<int> dp(sz);
        dp.assign(nums.begin(), nums.end()); // copy the value of nums to dp

        // dp[j] -> from dp[0] to dp[j], the most scores player1 has over player2
        for(int i=sz-1; i>=0; i--){
            for(int j=i+1; j<sz; j++){
                // nums[i]/[j] -> choose the nums[i] or nums[j]
                // dp[j]/[j-1] -> scores won by the previous player
                dp[j] = max(nums[i]-dp[j], nums[j]-dp[j-1]);
            }
        }
        return dp[sz-1] >= 0;
    }
};
