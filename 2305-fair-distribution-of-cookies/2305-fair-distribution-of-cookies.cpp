class Solution {
public:
    int ans=INT_MAX;
    void backtrack(vector<int>& cookies, int k,int ind,vector<int> &v)
    {
        if(ind==cookies.size())
        {
            int mx=0;
            for(int i=0;i<v.size();i++)
            {
                mx=max(mx,v[i]);
                
            }
            ans=min(ans,mx);
            return ;
        }
        
        for(int i=0;i<k;i++)
        {
            v[i]+=cookies[ind];
            backtrack(cookies,k,ind+1,v);
            v[i]-=cookies[ind];
        }
        
    }
    
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> v(k,0);
        backtrack(cookies,k,0,v);
         
        return ans;
        
        
        
    }
};