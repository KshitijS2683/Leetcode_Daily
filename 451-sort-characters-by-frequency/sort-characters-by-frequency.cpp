class Solution {
public:
    static bool cmp(pair<char,int> &a,pair<char,int> &b)
    {
        return a.second>b.second;
    }
    string frequencySort(string s) {
        unordered_map<char,int> in;
        string out;
        for(int i = 0;i<s.size();i++)
        {
            in[s[i]]++;
        }
        vector<pair<char,int>> inp(in.begin(),in.end());
        sort(inp.begin(),inp.end(),cmp);
        for(auto &x : inp)
        {
            while(x.second > 0)
            {
                out.push_back(x.first);
                x.second--;
            }

        }
        return out;
        
    }
};