class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int j=0;
        int mx=0;
        int n=nums.size();
        
        while(j<n)
        {
            if(nums[j]==1)
                j++;
            else
            {
                j++;
                i=j;
            }
            mx=max(mx,j-i);
            
            
        }
        return mx;
        
    }
};