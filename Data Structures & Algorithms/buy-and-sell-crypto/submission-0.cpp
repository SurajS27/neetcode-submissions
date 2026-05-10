class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = 0;

        for (int price : prices) {
            // Update the minimum price seen so far
            if (price < min_price) {
                min_price = price;
            }
            
            // Calculate profit if we sold at current price
            int current_profit = price - min_price;
            
            // Update max profit if this is better
            if (current_profit > max_profit) {
                max_profit = current_profit;
            }
        }

        return max_profit;
    }
};
