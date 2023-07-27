class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_buy = 10000, max_profit = 0, sz = size(prices);
        for(int i=0; i<sz; i++){
            min_buy = min(min_buy, prices[i]);
            max_profit = max(max_profit, prices[i] - min_buy);
        }
        return max_profit;
    }
};
