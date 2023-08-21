class Solution {
public:
    int hammingDistance(int x, int y) {
        int diff=x^y, c=0;
	    for(int i=0; i<32; i++)
		    if(diff & (1<<i)) c++;
	    return c;
    }
};
