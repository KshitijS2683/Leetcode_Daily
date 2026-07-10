class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> inp;
        int odd = 0;
        for(int i =0;i<s.size();i++)
        {
            inp[s[i]]++;
            if(inp[s[i]]%2 == 1)
            {
                odd++;
            }
            else
            {
                odd--;
            }
        }
        if(odd > 1)
        {
            return s.size()-odd+1;
        }
        return s.size();
    }
};