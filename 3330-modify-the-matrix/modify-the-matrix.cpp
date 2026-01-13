class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>> answer = matrix;
        vector<int> max_elem;
        for(int j = 0;j<matrix[0].size();j++)
        {
            int cur_max = matrix[0][j];
            for(int i = 1;i<matrix.size();i++)
            {
                cur_max = max(matrix[i][j],cur_max);
            }
            max_elem.push_back(cur_max);
        }
        for(int j = 0;j<matrix[0].size();j++)
        {
            for(int i = 0;i<matrix.size();i++)
            {
                if(matrix[i][j] == -1)
                {
                    answer[i][j] = max_elem[j];
                }
            }
        }
        return answer;
        
    }
};