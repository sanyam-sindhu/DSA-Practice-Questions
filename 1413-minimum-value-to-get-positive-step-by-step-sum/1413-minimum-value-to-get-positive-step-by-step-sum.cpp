class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
        vector<int> presum(n,0);
        presum[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            presum[i]=presum[i-1]+nums[i];
            
        }
        int mx=presum[0];
        for(int i=1;i<n;i++)
        {
            if(presum[i]<mx)
                mx=presum[i];
                
        }
        if(mx<0)
        {
            return -mx+1;
}
        return 1;
        
    }
};