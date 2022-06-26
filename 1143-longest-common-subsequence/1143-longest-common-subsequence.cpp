class Solution {
public:
    int solve(int i,int j,string text1,string text2,vector<vector<int>> &dp)
    {
        if(i<0 || j<0)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(text1[i]==text2[j])
        {
            return dp[i][j]=1+solve(i-1,j-1,text1,text2,dp);
        }
        return dp[i][j]=max(solve(i-1,j,text1,text2,dp),solve(i,j-1,text1,text2,dp));
    }
    int longestCommonSubsequence(string s, string t) {
        int m=s.length();
    int n=t.length();
    vector<vector<int>>dp(m+1,vector<int>(n+1,0));
    for(int j=0;j<n;j++)
    {
        dp[0][j]=0;
    }
    for(int i=0;i<m;i++)
    {
        dp[i][0]=0;
    }
    for(int i=1;i<=m;i++)
    {
    for(int j=1;j<=n;j++)
    {
        if(s[i-1]==t[j-1])
    {
        dp[i][j]=1+dp[i-1][j-1];
    }
        else
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            
    }
                 
    }
    return dp[m][n];
        
    }
};