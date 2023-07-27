class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum=0;
        for(char c: columnTitle){
            int n = c-'A'+1;
            sum = sum*26 + n;
        }
        return sum;
    }
};
