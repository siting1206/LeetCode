class Solution {
public:
    string intToRoman(int num) {
        string IntRomanTable[4][10] = {
            {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
            {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
            {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
            {"", "M", "MM", "MMM"}
        };
        string s;
        s += IntRomanTable[3][num/1000];
        s += IntRomanTable[2][(num%1000) / 100];
        s += IntRomanTable[1][(num%100) / 10];
        s += IntRomanTable[0][(num%10)];

        return s;
    }
};
