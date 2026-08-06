class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,pair<int,int>> inp;
        for(int i = 0;i<list1.size();i++)
        {
            inp[list1[i]] = {i,-1};
        }
        for(int i = 0;i<list2.size();i++)
        {
            if(inp.find(list2[i]) != inp.end())
            {
                inp[list2[i]].second = i;
            }
        }
        vector<string> ans;
        int minsum = INT_MAX;
        for(auto &x : inp)
        {
            if(x.second.first != -1 && x.second.second != -1)
            {
                if(x.second.first + x.second.second == minsum)
                {
                    ans.push_back(x.first);
                }
                if(x.second.first + x.second.second < minsum)
                {
                    ans.clear();
                    ans = {x.first};
                    minsum = x.second.first + x.second.second;
                }
            }
        }
        return ans;

        
    }
};