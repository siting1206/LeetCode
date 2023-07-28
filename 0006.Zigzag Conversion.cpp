class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        int diff = 2*(numRows-1);
        string ans;

        for(int i=0; i<numRows; i++){
            int j=i;
            while(j<size(s)){
                ans.push_back(s[j]);
                int tail = j + diff -2*i;
                if(tail<size(s) && tail!=j && i!=0) ans.push_back(s[tail]);
                j += diff;
            }
        }

        return ans;
    }
};
