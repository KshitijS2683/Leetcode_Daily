class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<long> dp(amount + 1,-1);
        sort(coins.begin(),coins.end());
        dp[0] = 0;
        for(int i = 0;i<coins.size() && coins[i] <= amount;i++)
        {
            dp[coins[i]] = 1;
        }
        for(int i = 1;i<=amount;i++)
        {
            if(dp[i] == 1)
            {
                continue;
            }
            dp[i] = INT_MAX;
            for(int j = 0;j<coins.size() && coins[j] <= i;j++)
            {
                if(dp[i-coins[j]] == -1)
                {
                    continue;
                }
                dp[i] = min(dp[i],dp[i-coins[j]] + 1);
            }
            if(dp[i] == INT_MAX)
            {
                dp[i] = -1;
            }
        }
        return dp[amount];
        
    }
};