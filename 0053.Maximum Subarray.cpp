class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result=-1e9, sum=0;
        for(auto n: nums){
            sum+=n;
            result = max(result, sum);
            if(sum<0) sum=0;
        }
        return result;
    }
};
