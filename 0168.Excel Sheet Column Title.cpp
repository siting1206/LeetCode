class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        while(columnNumber-- > 0){
            ans = char((columnNumber%26) + 'A') + ans;
            columnNumber /= 26;
        }
        return ans;
    }
};
