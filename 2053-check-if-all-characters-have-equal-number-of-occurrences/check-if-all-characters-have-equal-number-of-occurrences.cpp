class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> inp;
        for(int i = 0;i<s.size();i++)
        {
            inp[s[i]]++;
        }
        int c = inp[s[0]];
        for(auto &x : inp)
        {
            if(c != x.second)
            {
                return false;
            }
        }
        return true;
        
    }
};