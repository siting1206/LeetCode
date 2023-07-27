class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int sz = size(nums);
        int left=0, right, zeros=0, ans=0;

        for(right=0; right<sz; right++){
            if(nums[right]==0) zeros++;
            if(zeros>1 && nums[left++]==0) zeros--;
            ans = max(ans, right-left);
        }
        return ans;
    }
};
