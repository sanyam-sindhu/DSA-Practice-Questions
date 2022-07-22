class Solution {
public:
    void solve(int ind,vector<int> &nums,vector<int> &v1,set<vector<int>> &v,int n)
    {
        if(ind>=n)
        {
            v.insert(v1);
            return ;
            
        }
        v1.push_back(nums[ind]);
        solve(ind+1,nums,v1,v,n);
        v1.pop_back();
        solve(ind+1,nums,v1,v,n);
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>> v;
        vector<int> v1;
        solve(0,nums,v1,v,n);
        vector<vector<int>> finalv(v.begin(),v.end());
        return finalv;
        
        
    }
};