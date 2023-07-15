class Solution {
public:
    void reverseString(vector<char>& s) {
        int sz = size(s);
        int left=0, right = sz-1;
        while(left<right){
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};
