class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_pro = 0;
        for (int i = 0; i < prices.size(); i++) {
            min_price = min(min_price, prices[i]);
            max_pro = max(max_pro, prices[i] - min_price);
        }
        return max_pro;
    }
};