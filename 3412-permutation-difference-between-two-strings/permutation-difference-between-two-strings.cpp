class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int> inp;
        int out = 0;
        for(int i = 0;i<s.size();i++)
        {
            inp[s[i]] = i;
        }
        for(int i = 0;i<t.size();i++)
        {
            out += abs(i - inp[t[i]]);
        }
        return out;
        
    }
};