class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int,set<int>> inp;
        vector<int> out(k,0);

        for(int i = 0; i < logs.size(); i++)
        {
            inp[logs[i][0]].insert(logs[i][1]);
        }

        for(auto &x : inp)
        {
            out[x.second.size() - 1]++;
        }

        return out;
    }
};