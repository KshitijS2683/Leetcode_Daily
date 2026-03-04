class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        vector<int> neg,pos;
        for(int i = 0;i<matrix.size();i++)
        {
            for(int j = 0;j<matrix[0].size();j++)
            {
                sum += abs(matrix[i][j]);
                if(matrix[i][j] >= 0)
                {
                    pos.push_back(matrix[i][j]);
                }
                else
                {
                    neg.push_back(matrix[i][j]);
                }
            }
        }
        if(neg.size()%2 == 0)
        {
            return sum;
        }
        else
        {
            sort(neg.begin(),neg.end());
            sort(pos.begin(),pos.end());
            if(pos.size() > 0)
            {
                sum -= 2 * min(abs(neg[neg.size()-1]),pos[0]);
            }
            else
            {
                sum -= 2 * abs(neg[neg.size()-1]);
            }
        }
        return sum;
        
    }
};