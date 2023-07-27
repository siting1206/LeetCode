class Solution {
public:
    vector<string> result;
    void generate(vector<string>& result, string s, int left, int right, int n){
        if(left==n && right==n){
            result.emplace_back(s);
            return;
        }
        if(left<n) generate(result, s+'(', left+1, right, n);
        if(right<left) generate(result, s+')', left, right+1, n);
    }
    vector<string> generateParenthesis(int n) {
       vector<string> result;
       generate(result, "", 0, 0, n);
       return result;
    }
};
