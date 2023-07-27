class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result = {{}}; // initial {}
        for(int num:nums){
            int sz = size(result);
            for(int i=0; i<sz; i++){
                result.push_back(result[i]);
                result.back().push_back(num);
            }
        }
        return result;
    }
};
