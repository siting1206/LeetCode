class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sz = size(nums);
        vector<vector<int>> result;

        for(int left=0; left<sz-2; left++){
            int mid = left+1, right = sz-1;
            while(mid<right){
                if(nums[left] + nums[mid] + nums[right] < 0) mid++;
                else if(nums[left] + nums[mid] + nums[right] > 0) right--;
                else{
                    result.push_back({nums[left], nums[mid], nums[right]});
                    int j=nums[mid], k=nums[right];
                    while(nums[mid]==j && mid<right) mid++;
                    while(nums[right]==k && mid<right) right--;
                }
            }
            while(nums[left]==nums[left+1] && left<sz-2) left++;
        }
        return result;
    }
};
