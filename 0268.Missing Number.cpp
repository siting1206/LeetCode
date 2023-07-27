class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0; i<size(nums); i++){
            if(i != nums[i]) return i;
        }
        return size(nums);
    }
};
