class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int> st;
        string out;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] == '(' && st.empty())
            {
                st.push(1);
            }
            else if(s[i] == '(')
            {
                st.push(1);
                out.push_back(s[i]);
            }
            else if(s[i] == ')' && st.size() == 1)
            {
                st.pop();
            }
            else if(s[i] == ')')
            {
                st.pop();
                out.push_back(s[i]);
            }
            else
            {
                out.push_back(s[i]);
            }
        }
        return out;
        
    }
};