class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        stringstream ss1(s1) , ss2(s2);
        string word;
        vector<string> out;
        unordered_map<string,int> inp1 , inp2;
        while(ss1 >> word)
        {
            inp1[word]++;
        }
        while(ss2 >> word)
        {
            inp2[word]++;
        }
        for(auto &x :inp1)
        {
            if(!inp2[x.first] && x.second == 1)
            {
                out.push_back(x.first);
            }
        }
        for(auto &x :inp2)
        {
            if(!inp1[x.first] && x.second == 1)
            {
                out.push_back(x.first);
            }
        }
        return out;
    }
};