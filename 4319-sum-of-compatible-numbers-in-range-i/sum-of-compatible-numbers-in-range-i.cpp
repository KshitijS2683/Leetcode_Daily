class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int ans = 0;
        for(int i = max(n-k,0);i<=n+k;i++)
        {
            if((n & i) == 0)
            {
                ans += i;
            }
        }
        return ans;
        
    }
};