class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> out;
        vector<pair<int,string>> inp;
        for(int i = 0;i<names.size();i++)
        {
            inp.push_back({heights[i],names[i]});
        }
        sort(inp.begin(),inp.end());
        for(int i = inp.size()-1;i>=0;i--)
        {
            out.push_back(inp[i].second);
        }
        return out;
        
    }
};