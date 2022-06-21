class Solution {
public:
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            dp[0][i]=grid[0][i];
        }
        for(int i=1;i<m;i++)
        {
            
            for(int j=0;j<n;j++)
            {
                int ans=INT_MAX;
                for(int k=0;k<n;k++){
                    ans=min(ans,moveCost[grid[i-1][k]][j]+dp[i-1][k]);
                
                }
                dp[i][j]=ans+grid[i][j];
                
            } 
            
        }
        int mx=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(mx>dp[m-1][i])
                mx=dp[m-1][i];
        }
        return mx;
                    
                        
    
    }
};