class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int slow=0, fast=1, tmp;
        while(fast<size(nums)){
            if(nums[slow]%2==1 && nums[fast]%2==0){
                swap(nums[slow], nums[fast]);
            }
            if(nums[slow]%2==0) slow++;
            fast++;
        }
        return nums;
    }
};
