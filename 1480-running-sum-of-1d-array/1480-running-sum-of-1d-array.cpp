class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefixsum(n,0);
        prefixsum[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            prefixsum[i]=prefixsum[i-1]+nums[i];
            
        }
        return prefixsum;
        
    }
};