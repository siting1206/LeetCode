class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result(n);
        result[0] = "1";
        for(int i=2; i<=n; i++){
            if(i%5==0 && i%3==0) result[i-1] = "FizzBuzz";
            else if(i%5==0) result[i-1] = "Buzz";
            else if(i%3==0) result[i-1] = "Fizz";
            else result[i-1] = to_string(i);
        }
        return result;
    }
};
