class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,int> inp;
        int count = 0;
        for(int i = 0;i<s.size();i++)
        {
            if(inp[s[i]] != 0)
            {
                count++;
                inp.clear();
            }
            inp[s[i]]++;
        }
        return count+1;
        
    }
};