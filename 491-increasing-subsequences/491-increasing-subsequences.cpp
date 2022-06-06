class Solution {
public:
    void solve(int ind,vector<int>& nums,vector<int> &v,set<vector<int>> &st){
        if(v.size()>=2){
            st.insert(v);
        }
        
        for(int i=ind;i<nums.size();i++){
            if(v.size()==0 || v[v.size()-1]<=nums[i]){
                v.push_back(nums[i]);
                solve(i+1,nums,v,st);
                v.pop_back();
            }
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> v;
        set<vector<int>> st;
        solve(0,nums,v,st);
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};