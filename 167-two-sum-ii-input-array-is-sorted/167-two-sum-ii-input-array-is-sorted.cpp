class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        vector<int> v;
        int j=nums.size()-1;
        while(i<j)
        {
            if(nums[i]+nums[j]==target){
                v.push_back(i+1);
                v.push_back(j+1);
                break;
            }
            
            else if(nums[i]+nums[j]<target)
            {
                i++;
                
            }
            else
            {
                j--;
            }
            
        }
        return v;
        
    }
};