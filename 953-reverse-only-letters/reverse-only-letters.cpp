class Solution {
public:
    bool ischar(char a)
    {
        if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
        {
            return true;
        }
        return false;
    }
    string reverseOnlyLetters(string s) {
        string only,out;
        for(int i = 0;i<s.size();i++)
        {
            if(ischar(s[i]))
            {
                only.push_back(s[i]);
            }
        }
        int j = only.size()-1;
        for(int i = 0;i<s.size();i++)
        {
            if(ischar(s[i]))
            {
                out.push_back(only[j--]);
            }
            else
            {
                out.push_back(s[i]);
            }
        }
        return out;
        
    }
};