class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(size(s)!=size(t)) return false;
        map<char, char> m, n;
        for(int i=0; i<size(s); i++){
            if(m.find(s[i]) == m.end() && n.find(t[i]) == n.end()){
                m[s[i]] = t[i];
                n[t[i]] = s[i];
            }
            else{
                if(m[s[i]] != t[i]) return false;
                if(n[t[i]] != s[i]) return false;
            }
        }
        return true;
    }
};
