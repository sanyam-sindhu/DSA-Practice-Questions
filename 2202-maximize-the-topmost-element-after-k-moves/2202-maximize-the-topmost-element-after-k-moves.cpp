class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==0){
            if(n>=1) 
                return nums[0];
            else 
                return -1;
        }
        if(k==1){
            if(n>=2) 
                return nums[1];
            else
                return -1;
        }
        if(n==1){
            if(k%2) 
                return -1;
            else
                return nums[0];
        }
        int mx=0;
        
        if(k>nums.size())
        {
            for(int i=0;i<nums.size();i++)
            {
                mx=max(mx,nums[i]);
}
            return mx;
        }
        
        else if(k==nums.size())
        {
            for(int i=0;i<nums.size()-1;i++)
            {
                mx=max(mx,nums[i]);
}
            return mx;
        }
        
        else if(nums.size()>k)
        {
            for(int i=0;i<k-1;i++)
            {
                mx=max(mx,nums[i]);
}
            return max(mx,nums[k]);
        }
        return 0;
       
            
        
    }
};