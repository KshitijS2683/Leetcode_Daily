class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int ans = 0;
        int last_0 = 0, last_1 = 0;
        vector<vector<string>> dp(words.size()+1);
        vector<string> out;
        dp[0] = {};
        for(int i = 0;i<groups.size();i++)
        {
            if(groups[i] == 0)
            {
                dp[i+1] = dp[last_1];
                dp[i+1].push_back(words[i]);
                last_0 = i+1;
            }
            else
            {
                dp[i+1] = dp[last_0];
                dp[i+1].push_back(words[i]);
                last_1 = i+1;
            }
            if(ans  < dp[i+1].size())
            {
                out = dp[i+1];
            }
        }
        return out;
    }
};