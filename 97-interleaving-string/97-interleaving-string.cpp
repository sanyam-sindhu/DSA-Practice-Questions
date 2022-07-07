class Solution {
public:
    bool solve(string s1,string s2,string s3,int i,int j,int k,vector<vector<int>> &dp)
    {
        if(i==s1.length() && j==s2.length() && k==s3.length())
            return true;
        if(dp[i][j]!=-1)
            return dp[i][j];
        bool take=false;
        bool nottake=false;
        if(i!=s1.length())
        {
            if(s1[i]==s3[k])
            {
                take=solve(s1,s2,s3,i+1,j,k+1,dp);
                
            }
        }
        if(j!=s2.length())
        {
            if(s2[j]==s3[k])
            {
                nottake=solve(s1,s2,s3,i,j+1,k+1,dp);
            }
        }
        return dp[i][j]=take|| nottake;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int m=s1.length();
        int n=s2.length();
        if(m+n!=s3.length())
            return false;
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return solve(s1,s2,s3,0,0,0,dp);
        
        
    }
};