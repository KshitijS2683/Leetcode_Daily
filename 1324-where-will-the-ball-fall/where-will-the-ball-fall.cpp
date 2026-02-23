class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> out(n, -1);

        for (int i = 0; i < n; i++) {
            int col = i;

            for (int row = 0; row < m; row++) {
                int dir = grid[row][col];
                int nextCol = col + dir;
                if (nextCol < 0 || nextCol >= n || grid[row][nextCol] != dir) {
                    col = -1;
                    break;
                }

                col = nextCol;
            }

            out[i] = col;
        }

        return out;
    }
};