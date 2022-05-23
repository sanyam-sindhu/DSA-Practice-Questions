class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=0;
        int mx=0;
        int z=0;
        while(j<n)
        {
            if(nums[j]==0)
                z++;
            if(z<=k)
            {
                
                mx=max(mx,j-i+1);
                j++;
            }
            else if(z>k)
            {
                while(z>k){
                if(nums[i]==0)
                    z--;
                i++;
            }
                j++;
            }
            
                
            
            
        }
        return mx;
        
    }
};