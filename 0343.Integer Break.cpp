class Solution {
public:
    int integerBreak(int n) {
        int ans;
        if(n==2||n==3) return n-1;
        else if(n==4) return n;
        else if(n==5) return n+1;
        else{
            int t=n/3, div=n%3;
            ans=pow(3, t);
            if(div==1) ans = ans*4/3;
            if(div==2) ans *= 2;
        }
        return ans;
    }
};
