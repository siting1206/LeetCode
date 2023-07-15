class Solution {
public:
    vector<vector<int>> permutations;
    void permutate(vector<int>& nums, int first){
        if(size(nums) == first) {
            permutations.emplace_back(nums);
            return;
        }
        for(int i = first; i < nums.size(); i++) {
            swap(nums[i], nums[first]);
            permutate(nums, first+1);
            swap(nums[i], nums[first]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        permutate(nums, 0);
        return permutations;
    }
};
