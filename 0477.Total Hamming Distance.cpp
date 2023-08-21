class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int sum=0;
        for(int i=0; i<32; i++){
            int ones=0;
            for(auto &num: nums){
                if(num & 1) ones++;
                num = num >> 1;
            }
            sum += ones*(size(nums)-ones);
        }
        return sum;
    }
};
