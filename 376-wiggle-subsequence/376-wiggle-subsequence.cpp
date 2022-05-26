class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n=nums.size();
        int diff=0;
        int ans=1;
        int sign=0;
        if(n==1)
            return 1;
        for(int i=1;i<n;i++)
        {
            int diff=nums[i]-nums[i-1];
            if(sign!=-1 && diff<0)
            {
                sign=-1;
                ++ans;
            }
            
            else if(sign!=1 && diff>0)
            {
                sign=1;
                ++ans;
                
}
            
        }
        return ans;
        
    }
};