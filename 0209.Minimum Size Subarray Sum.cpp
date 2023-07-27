class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sz = size(nums);
        int i=0, j=0, sum=0, minsz=sz+1;
        for(i=0; i<sz; i++){
            sum += nums[i];
            while(j<=i && sum>=target){
                minsz = min(minsz, i-j+1);
                sum -= nums[j];
                j++;
            }
        }
        if(minsz==sz+1) return 0;
        else return minsz;
    }
};
