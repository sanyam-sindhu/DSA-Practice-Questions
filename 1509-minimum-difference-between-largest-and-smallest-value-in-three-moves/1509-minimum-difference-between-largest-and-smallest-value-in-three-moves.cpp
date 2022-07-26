class Solution {
public:
    int minDifference(vector<int>& nums) {
        int mx=INT_MAX;
        int n=nums.size();
        int k=3;
        if(n<=4)
            return 0;
        sort(nums.begin(),nums.end());
        for(int i=0,j=n-k-1;j<n;i++,j++)
        {
            mx=min(mx,nums[j]-nums[i]);
        }
        return mx;
        
    }
};