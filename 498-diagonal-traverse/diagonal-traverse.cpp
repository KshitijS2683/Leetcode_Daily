class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> out;
        int row = 0,col=0;
        int m = mat.size(),n=mat[0].size();
        for(int i = 0;i<m*n;i++)
        {
            out.push_back(mat[row][col]);
            if((row+col)%2 == 0)
            {
                if(col== n-1)
                {
                    row++;
                }
                else if(row == 0)
                {
                    col++;
                }
                else
                {
                    row--;
                    col++;
                }
            }
            else
            {
                if(row == m-1)
                {
                    col++;
                }
                else if(col == 0)
                {
                    row++;
                }
                else
                {
                    row++;
                    col--;
                }
            }

        }
        return out;
        
    }
};