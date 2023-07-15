class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> record;
        while(n!=1){
            int sum=0;
            while(n!=0){
                sum += pow((n%10), 2);
                n /= 10;
            }
            if(record.count(sum)) return false;
            else record.insert(sum);
            n = sum;
        }
        return true;
    }
};
