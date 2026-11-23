class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        int curr = 0;
        if(s[s.size()-1] != '0')
        {
            return false;
        }
        vector<int> dp(s.size(),0);
        dp[0] = 1;
        for(int i = minJump;i<s.size();i++)
        {
            if(s[i] == '0')
            {
                for(int j = i-minJump; j>= i-maxJump && j>=0;j--)
                {
                    if(dp[j] == 1)
                    {
                        dp[i] = 1;
                        break;
                    }
                }
            }
        }
        return dp[s.size()-1] == 1?true:false;
        
    }
};