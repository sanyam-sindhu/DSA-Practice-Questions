class Solution {
public:
    int dp[50][50][50];
    
    int cherryPickup(vector<vector<int>>& grid) {
        
        int n=grid[0].size();
        memset(dp,-1,sizeof(dp));
        return max(0,helper(0,0,0,n,grid));
        
    }
    int helper(int i1,int j1,int j2,int n,vector<vector<int>>& grid)
    {
        int r2=i1+j1-j2;
        if(i1>=n||r2>=n||j1>=n||j2>=n||grid[i1][j1]==-1||grid[r2][j2]==-1)
            return INT_MIN;
        if(dp[i1][j1][j2]!=-1)
            return dp[i1][j1][j2];
        if(i1==n-1 && j1==n-1)
            return grid[i1][j1];
        int ans=grid[i1][j1];
        
        if(j1!=j2)
            ans+=grid[r2][j2];
        
        int temp=max(helper(i1,j1+1,j2+1,n,grid),
                     max(helper(i1+1,j1,j2+1,n,grid),
                     max(helper(i1,j1+1,j2,n,grid),helper(i1+1,j1,j2,n,grid))));
        
        ans+=temp;
        
        return dp[i1][j1][j2]=ans;
    }
};