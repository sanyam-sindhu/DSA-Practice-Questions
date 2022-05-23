class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int z=0;
        int n=nums.size();
        int mx=INT_MIN;
        int i=0;
        for(int j=0;j<n;j++)
        {
            if(nums[j]==0)
                z++;
            while(z>k)
            {
                if(nums[i]==0)
                    z--;
                i++;
            }
            mx=max(mx,j-i+1);
            
        }
        return mx;
        
    }
};