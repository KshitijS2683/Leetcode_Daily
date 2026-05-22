class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int,int> inp;
        int maxwall = 0;
        for(int i = 0;i<wall.size();i++)
        {
            long long curr = 0;
            for(int j = 0;j<wall[i].size()-1;j++)
            {
                curr += wall[i][j];
                inp[curr]++;
                maxwall = max(maxwall,inp[curr]);
            }
        }
        return wall.size()-maxwall;
        
    }
};