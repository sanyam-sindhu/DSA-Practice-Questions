class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mx=INT_MAX;
        int profit=0;
        int finprofit=0;
        for(int i=0;i<n;i++)
        {
            
            
            if(prices[i]-mx<0)
            {
                mx=prices[i];
            }
            
            else if(prices[i]-mx>0)
            {
                profit+=prices[i]-mx;
                mx=INT_MAX;
            }
            mx=min(mx,prices[i]);
            
            
            
            
            
        }
        return profit;
        
    }
};