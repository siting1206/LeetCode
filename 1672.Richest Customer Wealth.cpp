class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=0;
        for(auto account: accounts){
            int sum=0;
            for(auto acc: account){
                sum+=acc;
            }
            m = max(m, sum);
        }
        return m;
    }
};
