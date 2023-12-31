class Solution {
public:
    void backtrack(int s, int &n, int k, vector<int> &tmp, vector<vector<int>> &ans){
        if(k==0){
            ans.push_back(tmp);
            return;
        }
        for(int i=s; i<=n; i++){
            tmp.push_back(i);
            backtrack(i+1, n, k-1, tmp, ans);
            tmp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> tmp;
        backtrack(1, n, k, tmp, ans);
        return ans;
    }
};
