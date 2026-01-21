class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
         int m = boxGrid.size(), n = boxGrid[0].size();
    vector<vector<char>> res(n, vector<char>(m, '.'));
    for (int i = 0; i < m; ++i)
        for (int j = n - 1, k = n - 1; j >= 0; --j)
            if (boxGrid[i][j] != '.') {
                k = boxGrid[i][j] == '*' ? j : k;
                res[k--][m - i - 1] = boxGrid[i][j];
            }

    return res;
    }
};