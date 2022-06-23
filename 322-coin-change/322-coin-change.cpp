class Solution {
public:
    int solve(int ind,int amount,vector<int>& coins,vector<vector<int>>&dp)
    {
        if(ind==0)
        {
            if(amount%coins[ind]==0)
                return amount/coins[ind];
            else
                return 1e9;
        }
        if(dp[ind][amount]!=-1)
            return dp[ind][amount];
        int nottake=solve(ind-1,amount,coins,dp);
        int take=INT_MAX;
        if(coins[ind]<=amount)
        {
            take=1+solve(ind,amount-coins[ind],coins,dp);
        }
        return dp[ind][amount]=min(take,nottake);
    }
    int coinChange(vector<int>& coins, int amount) {
        
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,0));
        for(int i=0;i<=amount;i++)
        {
            if(i%coins[0]==0)
            {
                dp[0][i]=i/coins[0];
            }
            else
                dp[0][i]=1e9;
        }
        for(int i=1;i<n;i++)
        {
            for(int tar=0;tar<=amount;tar++)
            {
                int nottake=dp[i-1][tar];
                int take=1e9;
                if(coins[i]<=tar)
                 {       
                    take=1+dp[i][tar-coins[i]];
                }
                dp[i][tar]=min(take,nottake);
            }
            
        }
        if(dp[n-1][amount]==1e9)
            return -1;
        else
            return dp[n-1][amount];
    
    }
};