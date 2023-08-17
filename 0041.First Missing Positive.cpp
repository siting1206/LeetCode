class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0; i<size(nums); i++){ // mapping the nums[i] to the index i-1
            while(nums[i]>0 && nums[i]<=size(nums) && nums[i]!=nums[nums[i]-1])
                swap(nums[i], nums[nums[i]-1]);
        }
        for(int i=0; i<size(nums); i++){
            if(nums[i] != i+1) return i+1;
        }
        return size(nums)+1;
    }
};
