class Solution {
public:
    void solve(vector<int>& candidates, int target,vector<int> &v,vector<vector<int>> &finalv,int idx)
    {
        int n=candidates.size();
        if(idx==n)
        {
            if(target==0)
            {
                finalv.push_back(v);
            }
            return ;
        }
        if(candidates[idx]<=target)
        {
            v.push_back(candidates[idx]);
            solve(candidates,target-candidates[idx],v,finalv,idx);
            v.pop_back();
        }
        solve(candidates,target,v,finalv,idx+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> finalv;
        vector<int> v;
        solve(candidates,target,v,finalv,0);
        return finalv;
        
        
        
    }
};