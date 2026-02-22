class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> sec(bank.size(),0);
        for(int i = 0;i<bank.size();i++)
        {
            for(int j = 0;j<bank[0].size();j++)
            {
                if(bank[i][j] == '1')
                {
                    sec[i]++;
                }
            }
        }
        int prev = 0,cur = 0,out = 0;
        prev = sec[0];
        for(int i = 1;i<sec.size();i++)
        {
            cur = sec[i];
            if(sec[i] != 0)
            {
                out += cur * prev;
                prev = cur;
            }
        }
        return out;
        
    }
};