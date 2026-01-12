class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (original.size() != m * n) return {};
        vector<int> q(n,0);
        vector<vector<int>> out(m,q);
        int a = 0,count = 0;
        for(int i = 0;i<original.size();i++)
        {
            out[a][count] = original[i];
            count++;
            if(count == n)
            {
                a++;
                count = 0;
            }
        }
        return out;
    }
};