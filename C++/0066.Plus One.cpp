class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int s = size(digits)-1;
        digits[s] += 1;
        for(int i=s; i>=0; i--){
            if(digits[i] == 10){
                digits[i] = 0;
                if(i != 0) digits[i-1] += 1;
                else digits.insert(digits.begin(), 1);
            }
        }
        return digits;
    }
};
