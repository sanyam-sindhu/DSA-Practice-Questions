class Solution {
public:
    vector<vector<vector<int>>>mem;
    int solve(vector<int>&houses,vector<vector<int>>&cost,int target,int index,int p){
        int m=houses.size(),n=cost[0].size();
        if(index==m){
            if(target==0){
                return 0;
            } else {
                return INT_MAX;
            }
        } else if(target<0){
            return INT_MAX;
        } else if(mem[index][p][target]!=-1){
            return mem[index][p][target];
        } else {
            if(houses[index]==0){
                int minCost=INT_MAX;
                for(int color=1;color<=n;color++){
                    int ans;
                    if(color==p){
                        ans=solve(houses,cost,target,index+1,p);
                    } else {
                        ans=solve(houses,cost,target-1,index+1,color);
                    }
                    if(ans!=INT_MAX){
                        ans+=cost[index][color-1];
                    }
                    minCost=min(minCost,ans);
                }
                return mem[index][p][target]=minCost;
            } else {
                if(houses[index]==p){
                    return mem[index][p][target]=solve(houses,cost,target,index+1,p);
                } 
                else {
            return mem[index][p][target]=solve(houses,cost,target-1,index+1,houses[index]);
                }
            }
        }
    }
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        mem=vector<vector<vector<int>>>(m,vector<vector<int>>(n+1,vector<int>(target+1,-1)));
        int ans=solve(houses,cost,target,0,0);
        if(ans==INT_MAX)
          return -1;
        else
            return ans;
         
    }
};