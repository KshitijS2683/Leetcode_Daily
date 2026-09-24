class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(int i = 0;i<s.size();i++)
        {
            if(st.empty() || st.top() != s[i])
            {
                st.push(s[i]);
            }
            else if(st.top() == s[i])
            {
                st.pop();
            }
        }
        string out;
        while(!st.empty())
        {
            out.push_back(st.top());
            st.pop();
        }
        string output;
        for(int i = out.size()-1;i>=0;i--)
        {
            output.push_back(out[i]);
        }
        return output;

        
    }
};