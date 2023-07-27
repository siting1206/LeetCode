class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char, int> RomanNum{
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int sum=0;
        for(int i=0; i<size(s); i++){
            if(RomanNum[s[i]]>=RomanNum[s[i+1]]){
                sum += RomanNum[s[i]];
            }
            else{
                sum -= RomanNum[s[i]];
            }
        }
        return sum;
    }

};
