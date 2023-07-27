class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(size(s) != size(t)) return false;
        for(int i=0; i<size(s); i++){
            if(s[i] != t[i]) return false;
        }
        return true;
    }
};
