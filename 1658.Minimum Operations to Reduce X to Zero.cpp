class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0;
        for(auto num:nums) sum += num;

        int curSum=0, maxL=-1;
        for(int left=0, right=0; right<size(nums); right++){
            curSum += nums[right];

            while(left<=right && curSum>sum-x){
                curSum -= nums[left];
                left++;
            }

            if(curSum==sum-x) maxL=max(maxL, right-left+1);
        }

        if(maxL==-1) return -1;
        else return size(nums)-maxL;
    }
};
