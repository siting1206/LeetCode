class Solution {
public:
    char findTheDifference(string s, string t) {
        // by difference(ASCII) t_sum-s_sum
        for(int i=0; i<size(s); i++) t[i+1] += t[i]-s[i];
        return t[size(t)-1];
    }
};
