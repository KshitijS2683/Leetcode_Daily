class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        vector<int> out;
        unordered_map<int,vector<int>> inp;
        for(int i = 0;i<adjacentPairs.size();i++)
        {
            inp[adjacentPairs[i][0]].push_back(adjacentPairs[i][1]);
            inp[adjacentPairs[i][1]].push_back(adjacentPairs[i][0]);
        }
        int start;
        for(auto &x:inp)
        {
            if(x.second.size() == 1)
            {
                start = x.first;
                break;
            }
        }
        int curr = start;
        out.push_back(start);
        if(inp[curr][0] == start)
        {
            curr = inp[curr][1];
        }
        else
        {
            curr = inp[curr][0];
        }
        while(inp[curr].size() != 1) 
        {
            if(inp[curr][0] == out.back())
            {
                out.push_back(curr);
                curr = inp[curr][1];
            }
            else
            {
                out.push_back(curr);
                curr = inp[curr][0];
            }
        } 
        out.push_back(curr);
        return out;      
    }
};