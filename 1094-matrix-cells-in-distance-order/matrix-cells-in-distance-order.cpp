class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<pair<int,vector<int>>> inp;
        vector<vector<int>> mat(rows,vector<int>(cols));
        for(int i = 0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                mat[i][j] = abs(i-rCenter) + abs(j-cCenter);
                inp.push_back({mat[i][j],{i,j}});
            }
        }
        sort(inp.begin(),inp.end());
        vector<vector<int>> out;
        for(auto &x : inp)
        {
            out.push_back(x.second);
        }
        return out;

        
    }
};