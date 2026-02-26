class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> inp;
        for(int i = 0;i<grid.size();i++)
        {
            for(int j = 0;j<grid[0].size();j++)
            {
                inp.push_back(grid[i][j]);
            }
        }
        sort(inp.begin(),inp.end());
        // int a = (inp[1]-inp[0])%x;
        for(int i = 1;i<inp.size();i++)
        {
            if((inp[i] - inp[i-1])%x != 0)
            {
                return -1;
            }
        }
        int sum = 0;
        int i = 0,j=inp.size()-1;
        while(i<j)
        {
            sum += inp[j--]-inp[i++];
        }
        return sum/x;
    }
};