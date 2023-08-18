class Solution {
public:
    int triangularSum(vector<int>& nums) {
        while(size(nums)!=1){
            for(int i=0; i<size(nums)-1; i++){
                nums[i] = (nums[i]+nums[i+1])%10;
            }
            nums.pop_back();
        }
        return nums[0];
    }
};
