class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> out(n,vector<int> (m));
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                int sum = 0;
                if(i>0)
                {
                    sum += board[i-1][j];
                }
                if(i>0 && j<m-1)
                {
                    sum += board[i-1][j+1];
                }
                if(j>0)
                {
                    sum += board[i][j-1];
                }
                if(j>0 && i<n-1)
                {
                    sum += board[i + 1][j-1];
                }
                if(i>0 && j>0)
                {
                    sum += board[i-1][j-1];
                }
                if(i<n-1)
                {
                    sum += board[i+1][j];
                }
                if(j<m-1)
                {
                    sum += board[i][j+1];
                }
                if(i<n-1 && j<m-1)
                {
                    sum += board[i + 1][j+1];
                }

                if(sum < 2)
                {
                    out[i][j] = 0;
                }
                else if(sum > 3)
                {
                    out[i][j] = 0;
                }
                else if(sum == 3)
                {
                    out[i][j] = 1;
                }
                else
                {
                    out[i][j] = board[i][j];
                }
            }

        }
        board = out;
        
    }
};