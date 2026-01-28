class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> out,row;
        vector<pair<int,int>> col;
        int col_index = 0;
        int max_value,min_value;
        for(int i = 0;i<matrix.size();i++)
        {
            min_value = INT_MAX;
            for(int j = 0;j<matrix[0].size();j++)
            {
                min_value = min(matrix[i][j],min_value);
            }
            row.push_back(min_value);
        }

        for(int j = 0;j<matrix[0].size();j++)
        {
            max_value = INT_MIN;
            for(int i = 0;i<matrix.size();i++)
            {
                if(matrix[i][j] > max_value)
                {
                    max_value = matrix[i][j];
                    col_index = i;
                }
            }
            col.push_back({max_value,col_index});
        }
        for(auto &x : col)
        {
            if(x.first == row[x.second])
            {
                out.push_back(x.first);
            }
        }
        return out;
        
    }
};