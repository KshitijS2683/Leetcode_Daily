class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1,t1;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] == '#' && !s1.empty())
            {
                s1.pop_back();
            }
            else if(s[i] == '#' && s1.empty())
            {
                continue;
            }
            else
            {
                s1.push_back(s[i]);
            }
        }
        for(int i = 0;i<t.size();i++)
        {
            if(t[i] == '#' && !t1.empty())
            {
                t1.pop_back();
            }
            else if(t[i] == '#' && t1.empty())
            {
                continue;
            }
            else
            {
                t1.push_back(t[i]);
            }
        }
        return s1 == t1;
    }
};