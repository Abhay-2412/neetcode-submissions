class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int buy = 0;
        int sell = 1;
        int maxProfit = 0;


        while(buy < sell && sell < prices.size())
        {
            int profit = prices[sell] - prices[buy];

            if(profit <0)
            {
                buy = sell;
                sell++;
                continue;
            }
            else
            {
                maxProfit = max(maxProfit,profit);
            }
            sell++;
        }
        
        return maxProfit;
    }
};
