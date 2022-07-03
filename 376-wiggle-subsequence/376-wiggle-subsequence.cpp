class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
    int n=nums.size();
      
        if(n==1)
            return n;
        
        int flag=0;

        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1] && flag>=0)
            {
                flag=-1;
            }
            else if(nums[i]>nums[i+1] && flag<=0)
            {
              
                flag=2;
                
            }
            else if(nums[i]==nums[i+1])
            {
                nums.erase(nums.begin()+i);
                i--;
            }
            else{
                nums.erase(nums.begin()+i);
                i--;
            }
                
            
        }
        return nums.size();
    }
};