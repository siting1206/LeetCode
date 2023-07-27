class Solution {
public:
    string longestPalindrome(string s) {
        int sz=size(s), left=0, right=0, len=0, l, r;
        string ans = "";
        for(int i=1; i<sz; i++){
            int l=i-1, r=i+1;
            while(l>=0 && r<sz && s[l]==s[r]){
                len = max(len, r-l+1);
                if(len==(r-l+1)){
                    left = l;
                    right = r;
                }
                l--;
                r++;
            }

            l=i-1, r=i;
            while(l>=0 && r<sz && s[l]==s[r]){
                len = max(len, r-l+1);
                if(len==(r-l+1)){
                    left = l;
                    right = r;
                }
                l--;
                r++;
            }
        }

        for(int i=left; i<=right; i++) ans+=s[i];
        return ans;
    }
};
