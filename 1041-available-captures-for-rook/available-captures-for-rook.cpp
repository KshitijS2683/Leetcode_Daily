class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int l = 0,r=0;
        for(int i = 0;i<board.size();i++)
        {
            for(int j = 0;j<board[i].size();j++)
            {
                if(board[i][j] == 'R')
                {
                    l = i;
                    r = j;
                    break;
                }
            }
        }
        int ans = 0;
        for(int i = l;i<board.size();i++)
        {
            if(board[i][r] == 'B')
            {
                break;
            }
            else if(board[i][r] == 'p')
            {
                ans++;
                break;
            }
        }
        for(int i = l;i>=0;i--)
        {
            if(board[i][r] == 'B')
            {
                break;
            }
            else if(board[i][r] == 'p')
            {
                ans++;
                break;
            }
        }
        for(int i = r;i<board.size();i++)
        {
            if(board[l][i] == 'B')
            {
                break;
            }
            else if(board[l][i] == 'p')
            {
                ans++;
                break;
            }
        }
        for(int i = r;i>=0;i--)
        {
            if(board[l][i] == 'B')
            {
                break;
            }
            else if(board[l][i] == 'p')
            {
                ans++;
                break;
            }
        }
        return ans;
    }
};