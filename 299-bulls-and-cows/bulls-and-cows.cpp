class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int> inp,inp1;
        int cows = 0,bulls = 0;
        string temp;
        for(int i = 0;i<secret.size();i++)
        {
            if(secret[i] == guess[i])
            {
                bulls++;
            }
            else
            {
                inp[secret[i]]++;
                temp.push_back(guess[i]);
            }
        }
        // for(int i = 0;i<guess.size();i++)
        // {
        //     inp1[guess[i]] = i+1;
        // }
        // for(auto &x : inp1)
        // {
        //     if(inp[x.first] == x.second)
        //     {
        //         bulls++;
        //         inp[x.first] = -1;
        //     }
        // }
        // for(auto &x : inp1)
        // {
        //     if(inp[x.first] > 0)
        //     {
        //         cows++;
        //         inp[x.first] = -1;
        //     }
        // }
        for(int i = 0;i<temp.size();i++)
        {
            if(inp[temp[i]])
            {
                cows++;
                inp[temp[i]]--;
            }
        }
        string out = "";
        out += to_string(bulls);
        // out.push_back(bulls + '0');
        out.push_back('A');
        out += to_string(cows);
        // out.push_back(cows + '0');
        out.push_back('B');
        return out;

        
    }
};