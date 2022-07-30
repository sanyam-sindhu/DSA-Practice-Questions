class Solution {
public:
    void solve(int ind,vector<string> &nums,unordered_map<string,int> &v,string &ans,string s,int n)
    {
        if(ind==n)
        {
            if(v.find(s)==v.end())
            {
                ans=s;
            }
            return ;
                
        }
        solve(ind+1,nums,v,ans,s+'0',n);
        solve(ind+1,nums,v,ans,s+'1',n);
        
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        unordered_map<string,int> v;
        string ans="";
        for(auto i:nums)
        {
            v[i]++;
            
        }
        solve(0,nums,v,ans,"",n);
        return ans;
        
    }
};