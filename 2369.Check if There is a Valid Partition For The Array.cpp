class Solution {
public:
    bool dp[100001]={true}; // 2<=length<=100000
    bool validPartition(vector<int>& nums) {
        int n = size(nums);
        dp[2] = (nums[0] == nums[1]);
        // dp[n]: first n elements has valid partitions or not
        for (int i=2; i!=n; ++i) {
            if(nums[i] == nums[i-1]){
                dp[i+1] |= dp[i-1];
                if(nums[i]==nums[i-2]) dp[i+1] |= dp[i-2];
            }
            else if(nums[i]==nums[i-1]+1 && nums[i-1]==nums[i-2]+1)
                dp[i+1] |= dp[i-2]; // check the end of previous subarray
        }
        return dp[n];
    }
};
