class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int minSoFar = prices[0];
         int maxProfit = 0;
        
        
        for(int i=0; i<prices.size(); i++)
        {
            if(prices[i]<minSoFar)
            {
                minSoFar = prices[i];
            }
            int sell = prices[i] - minSoFar;
            if(sell>maxProfit)
            {
                maxProfit = sell;
            }
        }
        
        return maxProfit;
    }
};