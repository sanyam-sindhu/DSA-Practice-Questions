class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>pivot)
                cnt++;
                
        }
        vector<int> v(n,pivot);
        int l=0;
        int r=n-cnt;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<pivot)
                v[l++]=nums[i];
            else if(nums[i]>pivot)
                v[r++]=nums[i];
        }
        return v;
        
    }
};