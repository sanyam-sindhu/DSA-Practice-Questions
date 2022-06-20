class Solution {
public:
        
    bool solve(vector<int>& nums, int sum,int i, vector<vector<int>> &dp) {
       
        if(sum==0)
            return true;
        if(sum<0 or i>=nums.size())
            return false;
        if(dp[i][sum]!=-1)
            return dp[i][sum];
        return dp[i][sum]=solve(nums,sum,i+1,dp) or solve(nums,sum-nums[i],i+1,dp);
   
    }
    
    bool canPartition(vector<int>& nums) {
        
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        if(sum&1)
            return false;
        sum=sum/2;
        vector<vector<int>> dp(nums.size()+1,vector<int>(sum+1,-1));  
        return solve(nums,sum,0,dp);
    }
};