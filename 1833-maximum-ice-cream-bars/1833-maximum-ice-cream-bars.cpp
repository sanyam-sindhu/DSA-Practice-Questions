class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        long long int sum=0;
        sort(costs.begin(),costs.end());
        for(auto i:costs)
        {
            sum+=i;
        }
        if(sum<=coins)
            return costs.size();
        int cnt=0;
        for(int i=0;i<costs.size();i++)
        {
            if(costs[i]<=coins)
            {
                coins-=costs[i];
                cnt++;
            }
            else
                break;
            
        }
        return cnt;
        
    }
};