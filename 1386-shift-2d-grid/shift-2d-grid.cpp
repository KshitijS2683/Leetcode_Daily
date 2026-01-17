class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        int r = 0,l =0;
        k = k%(m*n);
        vector<vector<int>> temp(n,vector<int>(m,0));
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                int new_idx = (i*m+j+k)%(m*n);
                l = new_idx/m;
                r = new_idx%m;
                temp[l][r] = grid[i][j];
            }
        }
        return temp;
    }
};