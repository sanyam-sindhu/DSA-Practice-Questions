class Solution {
public:
    int check(vector<int>& nums,vector<int> &dp)
    {
        int n=nums.size();
        dp[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            int pick=nums[i];
            if(i>1)
                pick+=dp[i-2];
            int notpick=0+dp[i-1];
            dp[i]=max(pick,notpick);
        }
        return dp[n-1];
        
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==1)
            return nums[0];
        vector<int> dp(n-1,-1);
        vector<int> temp1,temp2;
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0)
                temp2.push_back(nums[i]);
            if(i!=nums.size()-1)
                temp1.push_back(nums[i]);
        }
        return max(check(temp1,dp),check(temp2,dp));
        
    
        
    }
};