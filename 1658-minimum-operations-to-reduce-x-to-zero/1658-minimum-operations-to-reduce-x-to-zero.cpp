class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int total_sum = 0;
        for(int i = 0; i < n; i++)
        {
            total_sum += nums[i];
        }
        int target =total_sum - x;
        int cnt=INT_MIN;
        int i=0;
        int j=0;
        int curr_sum = 0;
        while(j<n)
        {
            curr_sum+=nums[j];
            while(i<=j && curr_sum>target)
            {
                curr_sum -= nums[i];
                i++;
            }
            
            if(curr_sum==target)
            {
                cnt=max(cnt,j-i+1);
            }
            j++;
        }
        
        if(cnt==INT_MIN)
            return -1;
        else
            return n-cnt;
    }
};