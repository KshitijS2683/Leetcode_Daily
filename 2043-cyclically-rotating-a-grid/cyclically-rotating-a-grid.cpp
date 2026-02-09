class Solution {
public:
    void output(vector<vector<int>>& grid, int index, int k, vector<vector<int>>& ans)
    {
        int a = grid.size() - index - 1;
        int b = grid[0].size() - index - 1;

        vector<int> out;

        for (int j = index; j <= b; j++)
            out.push_back(grid[index][j]);

        for (int i = index + 1; i <= a; i++)
            out.push_back(grid[i][b]);

        for (int j = b - 1; j >= index; j--)
            out.push_back(grid[a][j]);

        for (int i = a - 1; i > index; i--)
            out.push_back(grid[i][index]);

        int count = out.size();
        k = k % count;
        int x = k;

        for (int j = index; j <= b; j++) {
            ans[index][j] = out[x];
            x = (x + 1) % count;
        }

        for (int i = index + 1; i <= a; i++) {
            ans[i][b] = out[x];
            x = (x + 1) % count;
        }

        for (int j = b - 1; j >= index; j--) {
            ans[a][j] = out[x];
            x = (x + 1) % count;
        }

        for (int i = a - 1; i > index; i--) {
            ans[i][index] = out[x];   // FIXED
            x = (x + 1) % count;
        }
    }

    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        vector<vector<int>> ans(grid.size(), vector<int>(grid[0].size()));

        int layers = min(grid.size(), grid[0].size()) / 2;

        for (int i = 0; i < layers; i++)
            output(grid, i, k, ans);

        return ans;
    }
};
