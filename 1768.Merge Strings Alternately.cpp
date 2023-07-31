class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int sz1=size(word1), sz2=size(word2), m=max(sz1, sz2);
        string ms;
        for(int i=0; i<m; i++){
            if(i<sz1) ms.push_back(word1[i]);
            if(i<sz2) ms.push_back(word2[i]);
        }
        return ms;
    }
};
