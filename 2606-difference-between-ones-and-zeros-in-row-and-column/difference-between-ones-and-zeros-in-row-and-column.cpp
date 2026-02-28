class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> onesRow(m,0),zeroesRow(m,0);
        vector<int> onesCol(n,0),zeroesCol(n,0);
        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(grid[i][j] == 1)
                {
                    onesRow[i]++;
                    onesCol[j]++;
                }
                else
                {
                    zeroesRow[i]++;
                    zeroesCol[j]++;
                }

            }
        }
        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                grid[i][j] = onesRow[i]+onesCol[j]-zeroesRow[i]-zeroesCol[j];
            }
        }
        return grid;
    }
};