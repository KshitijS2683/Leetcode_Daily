class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() <=1)
        {
            return 0;
        }
        int hold = -prices[0];
        int sold = INT_MIN;
        int rest = 0;
        for(int i = 1;i<prices.size();i++)
        {
            int nexthold = max(hold , rest - prices[i]);
            int nextsold = hold + prices[i];
            int nextrest = max(rest,sold);

            hold = nexthold;
            sold = nextsold;
            rest = nextrest;
         }
         return max(rest,sold);
        
    }
};