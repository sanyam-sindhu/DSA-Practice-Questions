class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalcost=0;
        int totalgas=0;
        for(int i=0;i<gas.size();i++)
        {
            totalgas+=gas[i];
        }
        for(int i=0;i<cost.size();i++)
        {
            totalcost+=cost[i];
        }
        int start=0;
        if(totalcost>totalgas)
            return -1;
        int currfuel=0;
       
        for(int i=0;i<gas.size();i++)
        {
            
            currfuel+=gas[i]-cost[i];
            if(currfuel<0)
            {
                start=i+1;
                currfuel=0;
                
                
                
            }
        }
        return start;
        
    }
};