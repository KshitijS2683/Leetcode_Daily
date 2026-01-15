class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        vector<int> diag;
        for(int i = 0;i<mat[0].size();i++)
        {
            int a = 0,b=i;
            while(b<mat[0].size() && a<mat.size())
            {
                diag.push_back(mat[a][b]);
                a++;
                b++;
            }
            sort(diag.begin(),diag.end());
            a = 0,b=i;
            int k = 0;
            while(b<mat[0].size() && a<mat.size())
            {
                mat[a++][b++] = diag[k++];
            }
            diag.clear();
        }
        for(int i = 1;i<mat.size();i++)
        {
            int a = i,b=0;
            while(b<mat[0].size() && a<mat.size())
            {
                diag.push_back(mat[a][b]);
                a++;
                b++;
            }
            sort(diag.begin(),diag.end());
            a = i,b=0;
            int k = 0;
            while(b<mat[0].size() && a<mat.size())
            {
                mat[a++][b++] = diag[k++];
            }
            diag.clear();
        }
        return mat;
        
    }
};