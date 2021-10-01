class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp = 0;
        int n = prices.size();
        if(n == 1)
            return 0;
        if(n == 2)
        {
            if(prices[0] < prices[1])
                return prices[1]-prices[0];
            else
                return 0;
        }
        int l = 0;
        int r = 1;
        int mx = prices[r]-prices[l];
        if(mx <= 0)
            mx = 0;
        for(int i = 1; i <  n; i++)
        {
            if(prices[i] < prices[l])
            {
                l = i;
                r = i+1;
                if(r < n)
                {
                    if(mx < prices[r] - prices[l])
                        mx = prices[r] - prices[l];
                
                }
                else
                    return mx;
            }
            if(prices[i] > prices[r])
            {
                r = i;
                if(mx < prices[r] - prices[l])
                        mx = prices[r] - prices[l];
            }
            
        }
        return mx;
        
    }
};