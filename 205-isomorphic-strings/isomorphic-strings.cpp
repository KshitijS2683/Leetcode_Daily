class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> inp,inpT;
        for(int i = 0;i<t.size();i++)
        {
            if(inp[s[i]])
            {
                if(inp[s[i]] != t[i])
                {
                    return false;
                }
            }
            else if(inpT[t[i]])
            {
                if(inpT[t[i]] != s[i])
                {
                    return false;
                }

            }
            else
            {
                inp[s[i]] = t[i];
                inpT[t[i]] = s[i];
            }
        }
        return true;
        
    }
};