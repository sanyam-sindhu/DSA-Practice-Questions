class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return true;
        int ind=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]<nums[i-1])
            {
                if(ind!=0)
                {
                    return false;
                }
                ind=i;
            }
        }
        if(ind==0 || ind==1 || ind==n-1)
        {
            return true;
        }
        if(nums[ind-1]>nums[ind+1] && nums[ind-2]>nums[ind])
            return false;
        return true;
    }
};