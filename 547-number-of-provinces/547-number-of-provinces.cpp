class Solution {
public:
    void dfs(int node,int n,vector<vector<int>>& isConnected,vector<bool> &vis,vector<vector<int>> &adj)
    {
        vis[node]=true;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                dfs(it,n,isConnected,vis,adj);
            }
        }
            
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<vector<int>> adj(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                    }
                    
                }
            }
        }
        vector<bool> vis(n,0);
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                
                dfs(i,n,isConnected,vis,adj);
                count++;
            }
        }
        return count;
    }
};