class Solution {
public:
    bool win(vector<string>& board , char check)
    {
        for(int i = 0;i<3;i++)
        {
            if(board[i][0] == check &&  board[i][1] == check &&
            board[i][2] == check || 
            board[0][i] == check &&  board[1][i] == check &&
            board[2][i] == check)
            {
            return true;
            }
        }
        if(board[0][0] == check && board[1][1] == check && board[2][2] == check || board[0][2] == check && board[1][1] == check && board[2][0] == check  )
        return true;

        return false;
    }
    bool validTicTacToe(vector<string>& board) {
        int a = 0,b=0;
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                if(board[i][j] == 'O')
                {
                    a++;
                }
                else if(board[i][j] == 'X')
                {
                    b++;
                }
            }
        }
        if(a > b || b > a+1)
        {
            return false;
        }
        bool xwin = win(board,'X');
        bool owin = win(board,'O');
        if(owin && xwin)
        {
            return false;
        }
        if(owin && a != b)
        {
            return false;
        }
        if(xwin && b != a+1)
        {
            return false;
        }
        return true;
    }
};