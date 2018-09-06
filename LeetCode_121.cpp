// LeetCode #121
// Best Time to Buy and Sell Stock


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxProfit = 0;
        
        if(prices.size() == 0 || prices.size() == 1){
            return maxProfit;
        }
        
         int buyPrize = prices[0];
        
        for(int i = 1; i < prices.size(); ++i){
            maxProfit = max(maxProfit, (prices[i] - buyPrize));
            buyPrize = min(buyPrize, prices[i]);
        }

        
        return maxProfit;
    }
};