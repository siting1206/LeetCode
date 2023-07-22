class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sz = size(nums);  // e.g.[a,b,c,d]
        vector<int> ans(sz, 1);  // [1,1,1,1]

        for(int i=1; i<sz; i++){ // [1,1*a,1*a*b,1*a*b*c]
            ans[i] = ans[i-1]*nums[i-1];
        }
        int tmp = 1;
        for(int i=sz-1; i>=0; i--){ // [1*b*c*d,1*a*c*d,1*a*b*d,1*a*b*c]
            ans[i] *= tmp;
            tmp *= nums[i];
        }
        return ans;
    }
};
