class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        for(int i=0; i<size(nums); i++){
            if(nums[i]==target) ans.push_back(i);
            if(nums[i]>target) break;
        }
        return ans;
    }
};
