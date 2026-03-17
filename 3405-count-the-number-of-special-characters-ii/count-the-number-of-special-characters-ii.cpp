class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int> inp;
        int count = 0;
        for(int i = word.size()-1;i>=0;i--)
        {
            if(word[i] >= 'a' && word[i] <= 'z')
            {
                inp[word[i]]++;
            }
            else
            {
                if(inp[word[i] + 32] == 0)
                {
                    inp[word[i]]++;
                }
                else
                {
                    inp[word[i]] = 0;
                    continue;
                }
            }
        }
        for(auto &x : inp)
        {
            if(x.first >= 'a' && x.first <= 'z' && x.second > 0)
            {
                if(inp.count(x.first - 32) && inp[x.first - 32] > 0)  // ← fix
                {
                    count++;
                }
            }
        }
        return count;
    }
};