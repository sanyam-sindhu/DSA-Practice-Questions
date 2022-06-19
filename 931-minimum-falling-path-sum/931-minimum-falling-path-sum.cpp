class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> dp(n,vector<int>(m,0));
        for(int i=0;i<m;i++)
        {
            dp[0][i]=matrix[0][i];
            
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int left,right,up=0;
                up=matrix[i][j]+dp[i-1][j];
                left=matrix[i][j];
                if(j-1>=0)
                    left+=dp[i-1][j-1];
                else
                    left+=1e8;
                if(j+1<n)
                     right=matrix[i][j]+dp[i-1][j+1];
                else
                    right+=1e8;
                dp[i][j]=min(up,min(left,right));
            }
        }
        int mx=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(dp[n-1][i]<mx)
                mx=dp[n-1][i];
            
        }
        return mx;
        
    }
};