class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0){
            unsigned int carry = (a & b) << 1;
            a = a ^ b; // XOR: sum of non-carry
            b = carry;
        }
        return a;
    }
};
