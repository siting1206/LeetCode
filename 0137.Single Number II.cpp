class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0; i<32; i++){
            int tmp=0;
            for(int j=0; j<size(nums); j++){
                tmp += (nums[j] & 1);
                nums[j] = nums[j] >> 1;
            }
            ans += (tmp%3) << i;
        }
        return ans;
    }
};
