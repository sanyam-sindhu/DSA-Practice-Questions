class Solution {
public:
    void solve(vector<int> &nums,vector<int> &v,vector<vector<int>> &ans,int freq[])
    {
        if(v.size()==nums.size())
        {
            ans.push_back(v);
            return ;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                v.push_back(nums[i]);
                freq[i]=1;
                solve(nums,v,ans,freq);
                freq[i]=0;
                v.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        int n=nums.size();
        int freq[nums.size()]; 
        for(int i=0;i<nums.size();i++)
        {
            freq[i]=0;
        }
        solve(nums,v,ans,freq);
            return ans;
        
    }
};