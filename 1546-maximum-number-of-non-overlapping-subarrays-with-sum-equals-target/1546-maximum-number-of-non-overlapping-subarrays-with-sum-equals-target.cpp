class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        m[0]=-1;
        int n=nums.size();
        int sum=0;
        int ind=-1;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(m.find(sum-target)!=m.end() && m[sum-target]>=ind)
            {
                cnt++;
                ind=i;
                
                
            }
            m[sum]=i;
            
        }
        return cnt;
        
    }
};