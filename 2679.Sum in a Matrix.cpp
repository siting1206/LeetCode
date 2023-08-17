class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++) sort(nums[i].begin(), nums[i].end());
        for(int i=0;i<nums[0].size();i++){
            int mx=0;
            for(int j=0;j<nums.size();j++){
                mx=max(nums[j][i],mx);
            }
            sum+=mx;
        }
        return sum;
    }
};
