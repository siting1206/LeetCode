class Solution {
public:
    double op(int a, int b, vector<vector<double>> &dp){
        if(a<=0 && b<=0) return 0.5;
        if(a<=0) return 1;
        if(b<=0) return 0;
        if(dp[a][b] != -1) return dp[a][b];

        double ans = 0;
        ans += op(a-100, b, dp);
        ans += op(a-75, b-25, dp);
        ans += op(a-50, b-50, dp);
        ans += op(a-25, b-75, dp);
        return dp[a][b] = ans*0.25;
    }
    double soupServings(int n) {
        if(n>4800) return 1;
        vector<vector<double>> dp(n+1, vector<double>(n+1, -1));
        return op(n, n, dp);
    }
};
