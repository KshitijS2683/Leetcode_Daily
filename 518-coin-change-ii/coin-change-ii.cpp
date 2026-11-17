class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> inp(coins.size(),0);
        vector<long long> dp(amount+1,0);
        dp[0] = 1;
        for(int i = 0;i<coins.size();i++)
        {
            for(int j = 1;j<=amount;j++)
            {
                if(coins[i] <= j)
                {
                    dp[j] = min<long long>(INT_MAX, 1LL * dp[j] + dp[j - coins[i]]);
                    inp[i]++;
                }
            }
        }
        return dp[amount];

        
    }
};