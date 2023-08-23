class Solution {
public:
    string reorganizeString(string s) {
        int sz=size(s), maxCnt=0, maxIdx=-1;
        vector<int> freq(26, 0);
        for (auto c: s) {
            int curIdx = c - 'a';
            freq[curIdx]++;
            if (freq[curIdx] > maxCnt) {
                maxCnt = freq[curIdx];
                maxIdx = curIdx;
            }
        }
        if (maxCnt>(sz+1)/2) return "";

        int idx=0;
        while(freq[maxIdx]){
            s[idx] = maxIdx + 'a';  // char of maxInx first
            freq[maxIdx]--;
            idx += 2;
        }

        if (idx>=sz) idx = 1; // e.g.[a, _, a, _], idx will be 4>=4

        for (int i=0; i<26; i++) {
            if (freq[i]==0) continue;
            for (int j=0; j<freq[i]; j++) {
                s[idx] = 'a' + i;
                idx += 2;
                if (idx>=sz) idx=1;
            }
        }

        return s;
    }
};
