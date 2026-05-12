class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>> inp;
        vector<vector<int>> out;
        for(int i = 0;i<groupSizes.size();i++)
        {
            inp[groupSizes[i]].push_back(i);
        }
        for(auto &x : inp)
        {
            if(x.second.size() == x.first)
            {
                out.push_back(x.second);
            }
            else if(x.second.size() >= x.first)
            {
                int n = x.second.size()/x.first;
                for(int i = 0;i<n;i++)
                {
                    vector<int> temp(x.second.begin() + i*x.first,x.second.begin() + (i+1)*x.first);
                    out.push_back(temp);
                }
            }
        }
        return out;
    }
};