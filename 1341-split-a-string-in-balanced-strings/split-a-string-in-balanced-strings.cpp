class Solution {
public:
    int balancedStringSplit(string s) {
        stack<char> st;
        int ans = 0;
        for(int i = 0;i<s.size();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else
            {
                if(st.top() != s[i])
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
            if(st.empty())
            {
                ans++;
            }
        }
        return ans;
    }
};