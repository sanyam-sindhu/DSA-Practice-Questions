class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>&grid, int row, int col){
        if(i<0 || i>=row || j<0 || j>=col){
            return;
        }
        else if(grid[i][j]==1){
            return;
        }
        
        grid[i][j]=1;
        dfs(i+1,j,grid,row,col);
        dfs(i-1,j,grid,row,col);
        dfs(i,j+1,grid,row,col);
        dfs(i,j-1,grid,row,col);
    }
    int closedIsland(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(i==0 || j==0 || i==row-1 || j==col-1){
                    dfs(i,j,grid,row,col);
                }
            }
        }
        int ans= 0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==0){
                    ans++;
                    dfs(i,j,grid,row,col);
                }
            }
        }
        
        return ans;
    }
};