class Solution {
public:
    int numMusicPlaylists(int n, int l, int k) {
        int mx = 1e9+7;
        vector<vector<long>> dp(l+1, vector<long>(n+1));
        // playlists of length i using j different songs
        dp[0][0] = 1;
        for(int i=1; i<=l; i++){
            for(int j=1; j<=min(i, n); j++){
                // add a new song, j-1: used, select any one from n-(j-1):unused
                dp[i][j] = (dp[i-1][j-1] * (n-(j-1))) % mx;

                // reuse existing songs
                if(j>k) dp[i][j] = (dp[i][j] + dp[i-1][j] * (j-k)) % mx;
            }
        }
        return dp[l][n];
    }
};
