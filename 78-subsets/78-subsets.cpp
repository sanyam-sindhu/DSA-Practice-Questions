class Solution {
public:
    void subseq(int ind,vector<vector<int>> &finalv,vector<int> &v,vector<int> &nums)
    {
        int n=nums.size();
        if(ind>=n)
        {
            finalv.push_back(v);
            return ;
        }
        v.push_back(nums[ind]);
        subseq(ind+1,finalv,v,nums);
        v.pop_back();
        subseq(ind+1,finalv,v,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> finalv;
        vector<int> v;
        subseq(0,finalv,v,nums);
        return finalv;
        
        
        
    }
};