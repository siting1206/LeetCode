class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int dup = 0;
        for(int i=1; i<size(nums); i++){
            if(nums[i-1] == nums[i]) dup++;
            else nums[i - dup] = nums[i];
        }
        return size(nums) - dup;
    }
};
