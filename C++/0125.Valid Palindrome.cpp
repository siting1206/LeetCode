class Solution {
public:
    bool isPalindrome(string s) {
        string tmp;
        for (char c : s) {
            if (isalnum(c)) {
                tmp += tolower(c);
            }
        }

        int left=0, right = size(tmp)-1;
        while(left<right){
            if(tmp[left]!=tmp[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};
