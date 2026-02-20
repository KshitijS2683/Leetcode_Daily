class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;
        for(int i = 1;i<s.size();i++)
        {
            if(s[i] == s[i-1] || abs(s[i]-s[i-1]) == 32)
            {
                continue;
            }
            count++;
        }
        return count;
        
    }
};