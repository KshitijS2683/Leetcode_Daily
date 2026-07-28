class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int min_x = m,min_y = n;
        for(int i = 0;i<ops.size();i++)
        {
            min_x = min(min_x,ops[i][0]);
            min_y = min(min_y,ops[i][1]);
        }
        return min_x * min_y;
    }
};