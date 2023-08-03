class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string ss = s+s;
        if(ss.substr(1, size(ss)-2).find(s) != -1) return true;
        return false;
    }
};
