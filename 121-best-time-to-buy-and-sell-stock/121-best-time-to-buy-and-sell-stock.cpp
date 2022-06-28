class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        int mx=prices[0];
        for(int i=1;i<n;i++)
        {
           int cost=prices[i]-mx;
            profit=max(profit,cost);
            mx=min(mx,prices[i]);
        }
        return profit;
        
    }
};