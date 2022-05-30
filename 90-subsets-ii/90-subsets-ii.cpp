class Solution {
public:
    set<vector<int> >v1;
    void subseq(int ind,vector<vector<int>> &finalv,vector<int> &v,vector<int> &nums)
    {
        int n=nums.size();
        if(ind>=n)
        {
            return ;
        }
        v.push_back(nums[ind]);
        v1.insert(v);
        subseq(ind+1,finalv,v,nums);
        v.pop_back();
        subseq(ind+1,finalv,v,nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> v;
        vector<vector<int>> ans;
        subseq(0,ans,v,nums);
        ans.push_back({});
        for(auto i:v1)
        {
            ans.push_back(i);
        }
        return ans;
        
        
    }
};