class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        unordered_map<char,int> plate,temp;
        string ans;
        int siz = 0;
        for(int i = 0;i<licensePlate.size();i++)
        {
            if(isalpha(licensePlate[i]))
            {
                plate[tolower(licensePlate[i])]++;
            }
        }
        for(int i = 0;i<words.size();i++)
        {
            temp = plate;
            bool flag = true;
            for(int j = 0;j<words[i].size();j++)
            {
                // if(temp[words[i]] <= 0)
                // {
                //     flag = false;
                //     break;
                // }
                temp[words[i][j]]--;
            }
            for(auto &x : temp)
            {
                if(x.second > 0)
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                if(siz == 0 || words[i].size() < siz)
                {
                    ans = words[i];
                    siz = words[i].size();
                }
            }
        }
        return ans;
        
    }
};