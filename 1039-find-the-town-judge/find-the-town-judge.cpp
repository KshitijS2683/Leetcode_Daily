class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,pair<int,int>> inp;
        if(n == 1 && trust.size() == 0)
        {
            return 1;
        }
        for(int i = 0;i<trust.size();i++)
        {
            inp[trust[i][1]].first++;
            inp[trust[i][0]].second++;
        }
        int ans = -1;
        for(auto &x : inp)
        {
            if(x.second.first == n-1 && x.second.second == 0)
            {
                ans = x.first;
                break;
            }
        }
        return ans;
    }
};