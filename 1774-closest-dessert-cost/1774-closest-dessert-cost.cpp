class Solution {
public:
    void solve(int ind,int i,int &diff,int &mx,vector<int> &toppingCosts,int target)
    {
        if(ind==toppingCosts.size())
        {
            if(abs(target-i)<diff)
            {
                diff=abs(target-i);
                mx=i;
            }
            else if(abs(target-i)==diff)
            {
                mx=min(mx,i);
                
            }
            return ;
            
        }
        
        solve(ind+1,i,diff,mx,toppingCosts,target);
        solve(ind+1,i+toppingCosts[ind],diff,mx,toppingCosts,target);
        solve(ind+1,i+(toppingCosts[ind]*2),diff,mx,toppingCosts,target);
    }
    int closestCost(vector<int>& baseCosts, vector<int>& toppingCosts, int target) {
        int diff=INT_MAX;
        int mx=INT_MAX;
        for(auto i:baseCosts)
        {
            solve(0,i,diff,mx,toppingCosts,target);
            
        }
        return mx;
        
        
    }
};