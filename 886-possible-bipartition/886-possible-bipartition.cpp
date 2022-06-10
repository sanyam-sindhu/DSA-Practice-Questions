class Solution {
public:
    
    /*bool isBipartite(vector<vector<int>>&adj, vector<int>&color, int n, int x){
        queue<int>q;
        q.push(x);
        color[x] = 1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto v : adj[node]){
                if(color[v]==color[node])
                    return false;
                if(color[v]==0){
                    color[v] = 1+color[node];
                    q.push(v);
                }
            }
        }
        return true;
    }*/
    // dfs
    bool bipartiteDfs(int node, vector<vector < int>> &adj, vector<int> &color)
        {
            for (auto it: adj[node])
            {
                if (color[it] == -1)
                {
                    color[it] = 1 - color[node];
                    if (!bipartiteDfs(it, adj, color))
                    {
                        return false;
                    }
                }
                else if (color[it] == color[node]) return false;
            }
            return true;
        }
        
    
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int>color(n+1, -1);
        
        vector<vector<int>>adj(n+1);
        for(int i=0;i<dislikes.size();i++){
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        
        for(int i=1;i<=n;i++){
            if(color[i]==-1){
                color[i]=1;
                
                if(!bipartiteDfs(i,adj,color)){
                    return false;
                }
            }
        }
        return true;
    }
};