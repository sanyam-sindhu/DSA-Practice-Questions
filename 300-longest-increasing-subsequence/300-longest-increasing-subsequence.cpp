class Solution {
public:
    int solve(int ind,int prev,vector<vector<int>> &dp,int n,vector<int> &nums)
    {
        if(ind==n)
            return 0;
        if(dp[ind][prev+1]!=-1)
            return dp[ind][prev+1];
        int nottake=solve(ind+1,prev,dp,n,nums);
        int take=0;
        if(prev==-1 || nums[ind]>nums[prev])
        {
            nottake=max(nottake,1+solve(ind+1,ind,dp,n,nums));
        }
        return dp[ind][prev+1]=nottake;
        
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        for(int ind=n-1;ind>=0;ind--)
        {
            for(int prev=ind-1;prev>=-1;prev--)
            {
            int nottake=dp[ind+1][prev+1];
            int take=0;
            if(prev==-1 || nums[ind]>nums[prev])
            {
            nottake=max(nottake,1+dp[ind+1][ind+1]);
            }
                dp[ind][prev+1]=nottake;
            }
        }
        return dp[0][0];
        
    }
};