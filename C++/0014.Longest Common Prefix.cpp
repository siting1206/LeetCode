class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int sz = size(strs);
        string ans="";
        for(int i=0; i<size(strs[0]); i++){
            if(strs[0][i]==strs[sz-1][i]) ans += strs[0][i];
            else break;
        }
        return ans;
    }
};
