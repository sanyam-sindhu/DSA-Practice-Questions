class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
        int cost1=0;
        if(cost.size()==1)
            return cost[0];
        if(cost.size()==2)
            return cost[0]+cost[1];
        int i=0;
        while(i<cost.size())
        {
            
                cost1+=cost[i];
            if(i+1<cost.size())
            {
                cost1+=cost[i+1];
            }
            i+=2;
            
            i++;
            
            
            
        }
        return cost1;
        
    }
};