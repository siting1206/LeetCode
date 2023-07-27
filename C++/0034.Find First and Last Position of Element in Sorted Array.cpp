class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int startPos = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        int endPos = lower_bound(nums.begin(),nums.end(),target + 1) - nums.begin() - 1;
        if(startPos < size(nums) && nums[startPos] == target)
            return {startPos,endPos};
        return {-1,-1};
    }
};
