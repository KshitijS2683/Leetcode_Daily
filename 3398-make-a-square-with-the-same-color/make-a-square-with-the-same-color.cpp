class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        char mid = grid[1][1];
        int b_count = 0,w_count = 0;
        for(int k = 0;k<=1;k++)
        {
            b_count = 0;
            w_count = 0;
            for(int i = k;i<=k+1;i++)
            {
                for(int j=0;j<=1;j++)
                {
                    if(grid[i][j] == 'B')
                    {
                        b_count++;
                    }
                    else
                    {
                        w_count++;
                    }

                }
            }
            if(b_count>w_count || b_count<w_count)
            {
                return true;
            }
        }

        for(int k = 0;k<=1;k++)
        {
            b_count = 0;
            w_count = 0;
            for(int i = k;i<=k+1;i++)
            {
                for(int j=1;j<=2;j++)
                {
                    if(grid[i][j] == 'B')
                    {
                        b_count++;
                    }
                    else
                    {
                        w_count++;
                    }

                }
            }
            if(b_count>w_count || b_count<w_count)
            {
                return true;
            }
        }

        return false;
        
    }
};