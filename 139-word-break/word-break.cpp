class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n =s.size();
        vector<bool> dp(n+1,false);
        unordered_map<string,int> inp;
        for(int i = 0;i<wordDict.size();i++)
        {
            inp[wordDict[i]] = 1;
        }
        dp[0] = true;
        for(int i = 1;i<=n;i++)
        {
            int j = i-1;
            while(j>=0)
            {
                if(inp[s.substr(j,i-j)] && dp[j] == true)
                {
                    dp[i] = true;
                    break;
                }
                j--;
            }
        }
        return dp[n];
        
    }
};