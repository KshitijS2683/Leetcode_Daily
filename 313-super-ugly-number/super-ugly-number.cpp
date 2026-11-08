class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        vector<long> dp(n);
        dp[0] = 1;
        vector<long> index(primes.size(),0);
        long min_val;
        for(int i = 1;i<n;i++)
        {
            min_val = INT_MAX;
            for(int j = 0;j<primes.size();j++)
            {
                min_val = min(min_val,(long)(primes[j] * dp[index[j]]));
            }
            dp[i] = min_val;
            for(int j = 0;j<primes.size();j++)
            {
                if(min_val == (long)primes[j] * dp[index[j]])
                {
                    index[j]++;
                }
            }
        }
        return dp[n-1];
        
    }
};