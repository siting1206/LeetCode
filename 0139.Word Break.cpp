class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string, bool> mp;
        int sz = size(s);
        for(auto word: wordDict) mp[word]=true;
        vector<bool> dp(sz+1, false);
        dp[sz]=true;

        for(int i=sz-1; i>=0; i--){
            string tmp = "";
            for(int j=i; j<sz; j++){
                tmp.push_back(s[j]);
                // if tmp in wordDict, check whether it is a segment
                if(mp[tmp]) dp[i] = dp[i] || dp[j+1]; // d[i]: Avoid that it has already been checked
            }
        }
        return dp[0];
    }
};
