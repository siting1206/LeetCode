class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int cnt=0;
        for(int i=0; i<size(tickets); i++)
            cnt += min(tickets[i], tickets[k]);

        for(int i=k+1; i<size(tickets); i++)
            if(tickets[i]>=tickets[k]) cnt--;

        return cnt;
    }
};
