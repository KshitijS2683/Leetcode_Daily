class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> inp,check;
        int out = 0;
        bool flag = true;
        for(int i = 0;i<chars.size();i++)
        {
            inp[chars[i]]++;
        }
        for(int i = 0;i<words.size();i++)
        {
            flag = true;
            check = inp;
            for(int j = 0;j<words[i].size();j++)
            {
                if(check[words[i][j]] <= 0)
                {
                    flag = false;
                    break;
                }
                else
                {
                    check[words[i][j]]--;
                }
            }
            if(flag)
            {
                out += words[i].size();
            }
        }
        return out;

        
    }
};