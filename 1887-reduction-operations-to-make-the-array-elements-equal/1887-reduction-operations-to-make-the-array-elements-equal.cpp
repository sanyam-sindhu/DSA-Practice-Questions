class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int cnt=1;
        int ans=0;
        int cnt1=0;
       
        for(int i=n-1;i>0;i--)
        {
            if(nums[i]==nums[i-1])
            {
                cnt++;
                
                
            }
            else
            {
                ans+=cnt+cnt1;
                cnt1+=cnt;
                cnt=1;
                
                
            }
            
            
            
        }
        return ans;
        
        
        
    }
};