class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i=size(nums)-1; i>=0; i--){
            if(nums[i]==val) nums.erase(nums.begin() + i);
        }
        return size(nums);
    }
};
