class Solution {
public:
    int solve(vector<int>& nums, int start, int end){
        int dp0=0, dp1=0, dp2;
        for(int i=start; i<end; i++){
            dp2 = max(dp1, dp0+nums[i]);
            dp0 = dp1;
            dp1 = dp2;
        }
        return dp1;
    }
    int rob(vector<int>& nums) {
        if(size(nums)==1) return nums[0];
        return max(solve(nums, 0, size(nums)-1), solve(nums, 1, size(nums)));
    }
};
