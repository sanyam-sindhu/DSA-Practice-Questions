class Solution {
public:
    int solve(int i,int j,vector<vector<int>>& grid)
    {
        if(i<0 || j<0 || i==grid.size()|| j==grid[0].size()||grid[i][j]==0)
        {
            return 0;
        }
        int current=grid[i][j];
        grid[i][j]=0;
        int ans=current;
        int ans1=0;
        ans1=max(ans1,solve(i-1,j,grid));
        ans1=max(ans1,solve(i+1,j,grid));
        ans1=max(ans1,solve(i,j-1,grid));
        ans1=max(ans1,solve(i,j+1,grid));
        ans+=ans1;
        grid[i][j]=current;
        return ans;
        
        
        
        
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]!=0){
                ans=max(ans,solve(i,j,grid));
                }
            }
        }
        return ans;
        
    }
};