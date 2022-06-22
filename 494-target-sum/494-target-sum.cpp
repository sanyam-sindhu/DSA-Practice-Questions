class Solution {
public:
    int targetSum(vector<int> &nums, int target, int index,vector<vector<int>> &dp){
        if(index == nums.size()){
            if(target == 0){
                return 1;
            }
            return 0;
        }
        if(dp[index][target]!=-1){
            return dp[index][target];
        }
        if(nums[index]<=target)
            return dp[index][target] = targetSum(nums,target-nums[index],index+1,dp) +      targetSum(nums,target,index+1,dp);
        return dp[index][target] = targetSum(nums,target,index+1,dp);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(1001,-1));
        int sum=0;
        for(auto it:nums)
        {
            sum+=it;
        }
        //cout<<sum;
        if(sum-target<0 || (sum-target)%2)
            return false; 
        return targetSum(nums,(sum-target)/2,0,dp);
        
    }
};