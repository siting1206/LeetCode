class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int sz = size(nums);
        int p1 = 0, p2 = 0;
        while(p2 <= sz-1){
            if(nums[p2]!=0){
                swap(nums[p1], nums[p2]);
                p1++;
            }
            p2++;
        }
    }
};
