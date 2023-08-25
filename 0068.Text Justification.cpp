class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int n=size(words);
        vector<string> ans;
        for(int i=0, w; i<n; i=w){
            int len=-1; // reset
            for(w=i; w<n && len+size(words[w])+1<=maxWidth; w++){
                len += size(words[w])+1;
            }
            string str = words[i];

            int space=1, extra=0; // init: 1 space+0 extra spaces
            if(w!=i+1 && w!=size(words)){
                space = (maxWidth-len) / (w-i-1) + 1; // +1(init 1 space)
                extra = (maxWidth-len) % (w-i-1); // non-balance situation
            }

            for(int j=i+1; j<w; j++){
                for(int s=space; s>0; s--) str+=' ';
                if(extra-- > 0) str+=' ';
                str += words[j];
            }

            int rem = maxWidth - size(str);  // only one word
            while(rem-- > 0) str+=' ';
            ans.push_back(str);
        }
        return ans;
    }
};
