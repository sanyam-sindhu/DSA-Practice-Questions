class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0 && k>0)
            {
                nums[i]=-nums[i];
                k--;
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        int mx=INT_MAX;
            for(int i=0;i<n;i++)
            {
                mx=min(mx,nums[i]);
            }
        if(k%2==0)
            return sum;
        else
            sum-=(2*mx);
            
        return sum;
    }
};