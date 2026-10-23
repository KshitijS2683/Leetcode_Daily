class Solution {
public:
    bool isvalid(string s,int i)
    {
        if((s[i-2]-'0') * 10 + (s[i-1] - '0') >= 10 && (s[i-2]-'0') * 10 + (s[i-1] - '0') <= 26)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    int numDecodings(string s) {
        if(s[0] == '0')
        {
            return 0;
        }
        string st;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] != '0')
            {
                st.push_back(s[i]);
            }
            else
            {
                if(st.back() == '1' || st.back() == '2')
                {
                    st.pop_back();
                    st.push_back('A');
                }
                else
                {
                    return 0;
                }
            }
        }
        s = st;
        vector<int> dp(s.size()+1,0);
        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2;i<=s.size();i++)
        {
            // if(s[i-1] == '0' && (s[i-2] =='1' || s[i-2] == '2'))
            if(s[i-1] == 'A')
            {
                dp[i] = dp[i-1];
            }
            // else if(s[i-1] == '0' && !(s[i-2] =='1' || s[i-2] == '2'))
            // {
            //     return 0;
            // }
            else
            {
                if(isvalid(s,i))
                {
                    dp[i] = dp[i-2] * 2;
                    if((i-3) >= 0 && isvalid(s,i-1))
                    {
                        dp[i] += dp[i-3];
                    }
                }
                else
                {
                    dp[i] = dp[i-1];
                }
            }
        }
        return dp[s.size()];
        
    }
};