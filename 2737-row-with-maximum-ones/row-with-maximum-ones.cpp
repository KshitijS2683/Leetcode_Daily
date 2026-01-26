class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int count = 0,index = 0,max_count = INT_MIN,max_index = 0;
        for(int i = 0;i<mat.size();i++)
        {
            count = 0;
            for(int j = 0;j<mat[0].size();j++)
            {
                if(mat[i][j] == 1)
                {
                    count++;
                }

            }
            if(count > max_count)
            {
                max_count = count;
                index = i;
            }
        }
        return {index,max_count};
        
    }
};