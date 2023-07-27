class Solution {
public:
    vector<string> letterCombinations(string digits) {
        // order: 0-1-2-3......6-7-8-9
        vector<string> tab={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> result;
        if(digits.empty()) return result;

        result.push_back("");
        for(auto d: digits){
            vector<string> tmp;
            for(auto t: tab[d-'0']){
                for(auto c: result){
                    tmp.push_back(c + t);
                }
            }
            result = tmp;
        }
        return result;
    }
};
