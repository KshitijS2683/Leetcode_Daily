class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        int out = 0;  // was INT_MIN

        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] == '(') {
                st.push(1);
                out = max(out, (int)st.size());
            } else if (s[i] == ')') {
                if (!st.empty()) st.pop();  // safety
            }
        }
        return out;
    }
};