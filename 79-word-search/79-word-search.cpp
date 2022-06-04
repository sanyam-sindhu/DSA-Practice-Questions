class Solution {
public:
    bool solve(vector<vector<char>>& board,int i,int j,int ind,vector<vector<int>> &vis,string word)
    {
        if(ind==word.size())
        {
            return true;
        }
        vis[i][j]=true;
        int di[]={1,0,-1,0};
        int dj[]={0,1,0,-1};
        for(int k=0;k<4;k++)
        {
            int nx=i+di[k];
            int ny=j+dj[k];
            if(nx>=0 && ny>=0 && nx<board.size() && ny<board[0].size() && vis[nx][ny]==false && board[nx][ny]==word[ind])
            {
                if(solve(board,nx,ny,ind+1,vis,word))
                    return true;
            }
        }
        vis[i][j]=false;
        return false;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        int r=board.size();
        int c=board[0].size();
        vector<vector<int>>vis(r,vector<int>(c,0));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(!vis[i][j] && board[i][j]==word[0])
                {
                    if(solve(board,i,j,1,vis,word))
                    {
                        return true;
                    }
                }
            }
        }
        return false;
        
    }
};