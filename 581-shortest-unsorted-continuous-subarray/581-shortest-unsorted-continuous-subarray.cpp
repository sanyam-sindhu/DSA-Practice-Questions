class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>v(nums);
        sort(v.begin(),v.end());
        if(nums==v)
            return 0;
        int i=0;
        int n=nums.size();
        int j=n-1;
        while(i<n && nums[i]==v[i])
        {
                i++;
        }
        while(j>=0 && nums[j]==v[j])
        {
           
                j--;
        }
        return j-i+1;
            
        
        
    }
};