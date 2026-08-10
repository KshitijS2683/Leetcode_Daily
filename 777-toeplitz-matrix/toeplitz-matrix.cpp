class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int i = 0;i<matrix[0].size();i++)
        {
            int j = 0;
            while(j<matrix.size()-1 && i < matrix[0].size()-1)
            {
                if(matrix[j][i] != matrix[j+1][i+1])
                {
                    return false;
                }
                j++;
            }
        }
        for(int i = 0;i<matrix.size();i++)
        {
            int j = 0;
            while(j<matrix[0].size()-1 && i < matrix.size()-1)
            {
                if(matrix[i][j] != matrix[i+1][j+1])
                {
                    return false;
                }
                j++;
            }
        }
        return true;
        
    }
};