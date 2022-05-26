class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int l, int r) {
        int i=0;
        int j=0;
        int n=nums.size();
        int cnt=0;
        int prevcount=0;
        while(j<n)
        {
            if(nums[j]>=l && nums[j]<=r)
            {
                
                
                cnt+=j-i+1;
                prevcount=j-i+1;
                j++;
                
            }
            else if(nums[j]<l)
            {
                cnt+=prevcount;
                j++;
            }
            else
            {
                
                j++;
                i=j;
                prevcount=0;
                
            }
        }
        return cnt;
        
        
    }
};