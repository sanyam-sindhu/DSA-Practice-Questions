class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector dist(n,INT_MAX);
        dist[src]=0;
        for(int i=0;i<=k;i++) {
            vector temp =dist;
            for(auto f:flights) {
                if(dist[f[0]]!=INT_MAX) 
                {
                    temp[f[1]]=min(temp[f[1]], f[2]+dist[f[0]]); 
                }
            }
            dist = temp;
        }
       if(dist[dst]==INT_MAX)
           return -1;
        else 
            return dist[dst];
        
    }
};