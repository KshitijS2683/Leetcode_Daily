class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> r,m;
        for(int i = 0;i<ransomNote.size();i++)
        {
            r[ransomNote[i]]++;
        }
        for(int i = 0;i<magazine.size();i++)
        {
            m[magazine[i]]++;
        }
        for(auto &x : r)
        {
            if(x.second > m[x.first])
            {
                return false;
            }
        }
        return true;
        
    }
};