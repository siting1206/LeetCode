class Solution {
public:
    int bestClosingTime(string customers) {
        int n=size(customers), best=-1, pt=0, maxpt=0;
        for(int i=0; i<n; i++){
            if(customers[i]=='Y') pt++;
            else pt--;
            if(pt>maxpt){
                maxpt = pt;
                best = i;
            }
        }
        return best+1;
    }
};
