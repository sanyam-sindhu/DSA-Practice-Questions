class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        
        while(low<=high)
        {
            int cnt=0;
            int mid=(low+high)/2;
            for(auto i:nums)
            {
                if(i<=mid)
                    cnt++;
            }
            if(cnt<=mid)
                low=mid+1;
            else
                high=mid-1;
                
            
        }
        return low;
        
    }
};