class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>> (m,vector<int>(m,0)));
        for(int j1=0;j1<m;j1++)
        {
            for(int j2=0;j2<m;j2++)
            {
                if(j1==j2)
                {
                    dp[n-1][j1][j2]=grid[n-1][j1];
                }
                else
                {
                    dp[n-1][j1][j2]=grid[n-1][j1]+grid[n-1][j2];
                }
            }
        }
         for (int i = n - 2; i >= 0; i--) {
    for (int j1 = 0; j1<m; j1++) {
      for (int j2 = 0;j2<m; j2++) {

        int mx = INT_MIN;
        for (int di=-1;di<=1;di++) {
          for (int dj=-1;dj<=1;dj++) {
            int sum;
            if (j1 == j2)
              sum=grid[i][j1];
            else
              sum= grid[i][j1] + grid[i][j2];

            if ((j1+di<0 ||j1+di>m-1) ||(j2+dj<0||j2+dj>m-1))
                sum+=-1e9;
            else
              sum+=dp[i+1][j1+di][j2+dj];

            mx=max(mx,sum);
          }
        }
        dp[i][j1][j2] = mx;
      }
    }
  }

  return dp[0][0][m-1];
        
        
    }
};