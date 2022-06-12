class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>& grid,vector<vector<bool>> &vis,int &sum)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0)
        {
            sum+=1;
            return ;
        }
        if(vis[i][j]==true)   
       {
         return;
       }
        vis[i][j]=true;
        
        dfs(i+1,j,grid,vis,sum);
        dfs(i-1,j,grid,vis,sum);
        dfs(i,j-1,grid,vis,sum);
        dfs(i,j+1,grid,vis,sum);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int sum=0;  
        int r = grid.size();
        int c = grid[0].size();
        vector<vector<bool>>vis(r, vector<bool>(c,false));
    
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)    
            {
                if(grid[i][j]==1 and vis[i][j]==false)  
                {
                    dfs(i,j,grid,vis,sum);
                    
                }
            }
        }
      
      return sum; 
        
        
    }
};