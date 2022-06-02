class Solution {
public:
    bool isvalid(vector<vector<char>>& board,int row,int col,char t)
{
    for(int i=0;i<9;i++)
    {
        if(board[row][i]==t)
            return false;
        if(board[i][col]==t)
            return false;
        if(board[3*(row/3)+(i/3)][3*(col/3)+(i%3)]==t)
            return false;
    }
    return true;
}
    bool solve(vector<vector<char>>& board)
    {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if(board[i][j]=='.')
                {
                    for(char c='1';c<='9';c++)
                    {
                        if(isvalid(board,i,j,c))
                        {
                            board[i][j]=c;
                            if(solve(board)==true)
                                return true;
                            else
                                board[i][j]='.';
                        }
                    }
                    return false;
                    
                }
                
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
        
        
    }
};