class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="") return 0;
        unordered_map<char, int> m;
        int max_len = 0, left = 0;
        for(int right=0; right<size(s); right++){
            if(m.count(s[right])==0){
                m[s[right]] = right;
                max_len = max(max_len, right-left);
            }
            else{
                left = m[s[right]] + 1;
                m[s[right]] = right;
            }
        }

        return max_len+1;
    }
};
