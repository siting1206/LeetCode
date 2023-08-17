class Solution {
public:
    int numTrees(int n) { // Catalan Numbers
       if(n==0 || n==1) return 1;
       if(n==2) return 2;
       if(n==3) return 5;
       int ans=0;
       for(int i=1; i<=n; i++){
           ans += numTrees(i-1)*numTrees(n-i);
       }
       return ans;
    }
};
