class Solution {
public:
    bool ispalindrome(string s)
    {
        int i = 0, j = s.size()-1;
        while(i<j)
        {
            if(s[i] != s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<vector<string>>> dp(s.size()+1);
        dp[0] = {{}};
        dp[1]={{string(1, s[0])}};
        for(int i = 2;i<=s.size();i++)
        {
            int j = 0;
            while(j<i)
            {
                if(ispalindrome(s.substr((i-1)-j,j+1)))
                {
                    for(int k = 0;k<dp[i-(j+1)].size();k++)
                    {
                        vector<string> current = dp[i-(j+1)][k];
                        current.push_back(s.substr((i-1)-j, j+1));
                        dp[i].push_back(current);
                        // dp[i].push_back(dp[i-(j+1)][k]);
                    }
                }
                j++;
            }
        }
        return dp[s.size()];

        
    }
};