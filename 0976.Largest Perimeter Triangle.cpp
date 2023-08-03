class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sz = size(nums);
        for(int i=sz-1; i>1; i--){ // The sum of the len of two sides of a triangle is greater than the third one
            if(nums[i]<nums[i-1]+nums[i-2]) return nums[i]+nums[i-1]+nums[i-2];
        }
        return 0;
    }
};
