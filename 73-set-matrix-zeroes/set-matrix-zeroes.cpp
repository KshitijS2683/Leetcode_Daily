class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row_zero = 1, col_zero = 1;

        // check first column
        for(int i = 0; i < matrix.size(); i++) {
            if(matrix[i][0] == 0) col_zero = 0;
        }

        // check first row
        for(int j = 0; j < matrix[0].size(); j++) {
            if(matrix[0][j] == 0) row_zero = 0;
        }

        // mark zeros
        for(int i = 1; i < matrix.size(); i++) {
            for(int j = 1; j < matrix[0].size(); j++) {
                if(matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // apply zeros
        for(int i = 1; i < matrix.size(); i++) {
            for(int j = 1; j < matrix[0].size(); j++) {
                if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // first row
        if(row_zero == 0) {
            for(int j = 0; j < matrix[0].size(); j++)
                matrix[0][j] = 0;
        }

        // first column
        if(col_zero == 0) {
            for(int i = 0; i < matrix.size(); i++)
                matrix[i][0] = 0;
        }
    }
};
