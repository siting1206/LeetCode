class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> table;

        for(auto s: strs){
            string tmp = s;
            sort(tmp.begin(), tmp.end());
            table[tmp].push_back(s);
        }
        vector<vector<string>> result;
        for(auto t: table){
            result.push_back(t.second);
        }
        return result;
    }
};
