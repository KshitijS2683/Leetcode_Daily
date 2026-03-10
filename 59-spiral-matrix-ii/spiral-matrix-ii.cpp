class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int>(n,0));
        int a = (n+1)/2;
        int m = n;
        int v = 1;
        // vector<int> out;

        for(int k = 0;k<a;k++)
        {
            int i = k,j=k;

            for(;j<m-k;j++)
                matrix[i][j] = v++;
                // out.push_back(matrix[i][j]);

            i = k+1, j = m-1-k;
            for(;i<n-k;i++)
                matrix[i][j] = v++;
                // out.push_back(matrix[i][j]);

            if(n-k-1 != k)
            {
                i = n-k-1, j = m-k-2;
                for(;j>=k;j--)
                    matrix[i][j] = v++;
                    // out.push_back(matrix[i][j]);
            }

            if(m-k-1 != k)
            {
                i = n-k-2, j = k;
                for(;i>k;i--)
                    matrix[i][j] = v++;
                    // out.push_back(matrix[i][j]);
            }
        }

        return matrix;
        
    }
};