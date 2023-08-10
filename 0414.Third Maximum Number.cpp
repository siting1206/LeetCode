class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int i=0, cnt=0;
        while(cnt!=2 && i+1<size(nums)){
            if(nums[i]>nums[i+1]) cnt++;
            i++;
        }
        if(cnt!=2) return nums[0]; // the third max does not exist
        return nums[i];
    }
};
