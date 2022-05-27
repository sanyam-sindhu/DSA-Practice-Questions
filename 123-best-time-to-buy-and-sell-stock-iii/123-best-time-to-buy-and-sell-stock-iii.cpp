class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit1=0;
        int mx1=INT_MAX;
        int mx2=INT_MAX;
        int profit2=0;
        
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            mx1=min(mx1,prices[i]);
            profit1=max(profit1,prices[i]-mx1);
            mx2=min(mx2,prices[i]-profit1);
            profit2=max(profit2,prices[i]-mx2);
            
        }
        return profit2;
    }
};