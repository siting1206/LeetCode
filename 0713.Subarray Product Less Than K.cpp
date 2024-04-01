class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l=0, r=0, sum=1, cnt=0, sz=size(nums);
        if(k<=1) return 0;
        while(r<sz) {
            sum *= nums[r];
            while(sum>=k) sum /= nums[l++];
            cnt += 1+(r-l);
            r++;
        }
        return cnt;
    }
};
