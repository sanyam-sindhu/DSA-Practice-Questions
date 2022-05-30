class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
       vector<int>v;
        
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++){
            sum+=nums[j];
            v.push_back(sum);
            }
        }
        
        sort(v.begin(),v.end());
        
        long long  res=0;
        
        for(int i=left;i<=right;i++)
        {
            res+=v[i-1];
        }
        return res%1000000007;
    } 
};