class Solution {
public:
    int minimumOperationsToWriteY(vector<vector<int>>& grid) {
        int ones_y=0,zeros_y=0,twos_y=0,ones=0,zeros=0,twos=0;
        vector<int> ys(3,0);
        vector<int> non_ys(3,0);
        int n = grid.size();
        int ans = 0,min_ans = INT_MAX,s=INT_MIN,ss=0;
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if((i-j == 0 && i<=n/2) || (i+j == n-1 && i<=n/2) || (i>n/2 && j == n/2))
                {
                    ys[grid[i][j]]++;
                }
                else
                {
                    non_ys[grid[i][j]]++;
                }
            }
        }
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                if(i != j)
                {
                    ans += ys[j];
                    if(s<non_ys[j])
                    {
                        s = non_ys[j];
                        ss = j;
                    }
                }
            }
            ans += non_ys[i];
            for(int j = 0;j<3;j++)
            {
                if(i != j && j != ss)
                {
                    ans += non_ys[j];
                }
            }
            min_ans = min(min_ans,ans);
            ans = 0;
            s = INT_MIN;
        }
        return min_ans;

    }
};