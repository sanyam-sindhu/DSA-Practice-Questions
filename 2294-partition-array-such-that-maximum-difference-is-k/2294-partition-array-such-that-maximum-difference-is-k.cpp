class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1)
        {
            return 1;
        }
        sort(nums.begin(),nums.end());
        int ans=1;
        int mx=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]-mx>k)
            {
                mx=nums[i];
                ans++;
                
            }
            else
            {
                continue;
                
            }
        }
        return ans;
        
    }
};