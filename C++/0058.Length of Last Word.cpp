class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0, sz=size(s), flag=0;
        for(int right = sz-1; right>=0; right--){
            if(flag && s[right] == ' ') return ans;
            if(s[right] != ' '){
                flag=1;
                ans++;
            }
        }
        return ans;
    }
};
