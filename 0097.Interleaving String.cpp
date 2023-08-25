class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        if(size(s1)+size(s2) != size(s3)) return false;
        bool dp[size(s1)+1][size(s2)+1];

        for(int i=0; i<size(s1)+1; i++){
            for(int j=0; j<size(s2)+1; j++){
                if(i==0 && j==0) dp[i][j] = true;
                else if(i==0) dp[i][j] = (dp[i][j-1] && s2[j-1] == s3[i+j-1]);
                else if(j==0) dp[i][j] = (dp[i-1][j] && s1[i-1] == s3[i+j-1]);
                else dp[i][j] = (dp[i-1][j] && s1[i-1]==s3[i+j-1]) || (dp[i][j-1] && s2[j-1]==s3[i+j-1]);
            }
        }
        return dp[size(s1)][size(s2)];
    }
};


//   N d b b c a
// N T F F F F F
// a T F F F F F
// a T T T T T F
// b F T T F T F
// c F F T T T T
// c F F F T F T
