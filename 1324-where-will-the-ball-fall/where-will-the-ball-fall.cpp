class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int> out(grid[0].size(), -1);

        for (int i = 0; i < grid[0].size(); i++) {
            int k = i;
            int j = 0;

            while (j < grid.size() && k >= 0 && k < grid[0].size()) {
                if (grid[j][k] == 1 && k + 1 < grid[0].size() && grid[j][k + 1] == 1) {
                    k++;
                    j++;
                }
                else if (grid[j][k] == 1 && (k + 1 >= grid[0].size() || grid[j][k + 1] == -1)) {
                    break;
                }
                else if (grid[j][k] == -1 && k - 1 >= 0 && grid[j][k - 1] == -1) {
                    k--;
                    j++;
                }
                else if (grid[j][k] == -1 && (k - 1 < 0 || grid[j][k - 1] == 1)) {
                    break;
                }
            }
            if (j == grid.size()) {
                out[i] = k;
            }
        }

        return out;
    }
};