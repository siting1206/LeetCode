class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> tmp = nums;
        if(nums[0]>nums[size(nums)-1]) sort(tmp.rbegin(), tmp.rend());
        else sort(tmp.begin(), tmp.end());

        return nums == tmp;
    }
};
