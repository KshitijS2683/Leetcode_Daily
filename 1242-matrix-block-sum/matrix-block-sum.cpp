class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        vector<vector<int>> prefixsum(mat.size(),vector<int> (mat[0].size(),0));
        vector<vector<int>> answer = prefixsum;
        int n = mat.size(),m = mat[0].size();
        for(int i = 0;i<prefixsum.size();i++)
        {
            for(int j = 0;j<prefixsum[0].size();j++)
            {
                prefixsum[i][j] += mat[i][j];
                if(i>0)
                {
                    prefixsum[i][j] += prefixsum[i-1][j];
                }
                if(j>0)
                {
                    prefixsum[i][j] += prefixsum[i][j-1];
                }
                if(i>0 && j>0)
                {
                    prefixsum[i][j] -= prefixsum[i-1][j-1];
                }

            }
        }
        for(int i = 0;i<prefixsum.size();i++)
        {
            for(int j = 0;j<prefixsum[0].size();j++)
            {
                int row,col,rowm,colm;
                if(i+k < n)
                {
                    row = i+k;
                }
                else
                {
                    row = n-1;
                }
                if(j+k < m)
                {
                    col = j+k;
                }
                else
                {
                    col = m-1;
                }
                if(i-k-1 >= 0)
                {
                    rowm = i-k-1;
                }
                else
                {
                    rowm = -1;
                }
                if(j-k-1 >= 0)
                {
                    colm = j-k-1;
                }
                else
                {
                    colm = -1;
                }
                answer[i][j] += prefixsum[row][col];
                if(colm != -1)
                {
                    answer[i][j] -= prefixsum[row][colm];
                }
                if(rowm != -1)
                {
                    answer[i][j] -= prefixsum[rowm][col];
                }
                if(colm != -1 && rowm != -1)
                {
                    answer[i][j] += prefixsum[rowm][colm];
                }
            }
        }
        return answer;
        

        
    }
};