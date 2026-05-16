class Solution {
public:
    bool canConvertString(string s, string t, int k) {
        if(s.size() != t.size())
        {
            return false;
        }
        vector<int> inp(26,0);
        for(int i = 0;i<k;i++)
        {
            inp[i%26]++;
        }
        for(int i = 0;i<s.size();i++)
        {
            if((t[i] - s[i] + 26)%26 > k)
            {
                return false;
            }
            if(t[i] == s[i])
            {
                continue;
            }
            if(inp[(t[i] - s[i] + 26)%26 - 1] <= 0)
            {
                return false;
            }
            inp[(t[i] - s[i] + 26)%26 - 1]--;
        }
        return true;
    }
};