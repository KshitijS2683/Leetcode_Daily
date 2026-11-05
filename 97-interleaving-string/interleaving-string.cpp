class Solution {
public:
    bool check(string s1, string s2, string s3 , int i,int j,int k)
    {
        if(k == s3.size())
        {
            return true;
        }
        else if(s3[k] == s1[i] && s3[k] != s2[j])
        {
            k++;
            i++;
            return check(s1,s2,s3,i,j,k);
        }
        else if(s3[k] == s2[j] && s3[k] != s1[i])
        {
            k++;
            j++;
            return check(s1,s2,s3,i,j,k);
        }
        else if(s3[k] == s2[j] && s3[k] == s1[i])
        {
            k++;
            return check(s1,s2,s3,i+1,j,k) || check(s1,s2,s3,i,j+1,k);;
        }
        return false;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int n = s1.size() , m = s2.size();
        vector<vector<bool>> dp(n+1,vector<bool>(m+1,false));
        if(s3.size() != s1.size() + s2.size())
        {
            return false;
        }
        dp[0][0] = true;
        for(int i = 1;i<=n;i++)
        {
            dp[i][0] = dp[i - 1][0] && s1[i - 1] == s3[i - 1];
        }
        for(int j = 1;j<=m;j++)
        {
            dp[0][j] = dp[0][j - 1] && s2[j - 1] == s3[j - 1];
        }
        for(int i = 1;i<=n;i++)
        {
            for(int j = 1;j<=m;j++)
            {
                if(s3[i+j-1] == s1[i-1] && s3[i+j-1] != s2[j-1])
                {
                    dp[i][j] = dp[i-1][j];
                }
                else if(s3[i+j-1] == s2[j-1] && s3[i+j-1] != s1[i-1])
                {
                   dp[i][j] = dp[i][j-1]; 
                }
                else if(s3[i+j-1] == s2[j-1] && s3[i+j-1] == s1[i-1])
                {
                    dp[i][j] = (dp[i-1][j] || dp[i][j-1]);
                }
                else
                {
                    dp[i][j] = false;
                }
            }
        }
        return dp[n][m];
        
    }
};