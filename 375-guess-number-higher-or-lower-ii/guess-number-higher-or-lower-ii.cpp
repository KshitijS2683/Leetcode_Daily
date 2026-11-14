class Solution {
public:
    int getMoneyAmount(int n) {
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        int ans = UpdateTable(dp,1,n);
        return ans;
    }
    int UpdateTable(vector<vector<int>> &dp,int start,int end)
    {
        if(start >= end)
        {
            return 0;
        }
        if(dp[start][end] != 0)
        {
            return dp[start][end];
        }
        else
        {
            int ans = INT_MAX;
            for(int i = start;i<=end;i++)
            {
                int temp = i + max(UpdateTable(dp,start,i-1),UpdateTable(dp,i+1,end));
                ans = min(ans,temp);
            }
            dp[start][end] = ans;
            return ans;
        }
    }
};