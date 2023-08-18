class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> truster(n+1, 0);
        vector<int> trustee(n+1, 0);
        for(auto &t: trust){
            truster[t[0]]++;
            trustee[t[1]]++;
        }
        for(int i=1; i<=n; i++){
            if(trustee[i]==n-1 && truster[i]==0) return i;
        }
        return -1;
    }
};
