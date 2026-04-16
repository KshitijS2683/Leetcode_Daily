class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> inp = words;
        for(int i = 0;i<words.size();i++)
        {
            sort(words[i].begin(),words[i].end());
        }
        vector<string> out = {inp[0]};
        for(int i = 1;i<words.size();i++)
        {
            if(words[i] != words[i-1])
            {
                out.push_back(inp[i]);
            }
        }
        return out;
        
    }
};