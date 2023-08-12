class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(vector<int> &arr, vector<int> &tmp, int start, int rest){
        if(rest<0) return;
        if(rest==0) ans.push_back(tmp);

        for(int i=start; i<size(arr); i++){
            tmp.push_back(arr[i]);
            backtrack(arr, tmp, i, rest-arr[i]);
            tmp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> tmp;
        backtrack(candidates, tmp, 0, target);
        return ans;
    }
};
