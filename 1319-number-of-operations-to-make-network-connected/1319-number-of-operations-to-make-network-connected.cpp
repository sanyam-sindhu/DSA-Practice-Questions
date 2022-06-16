class Solution {
public:
    void dfs(int v,vector<bool> &visited,vector<int> adj[]){
    visited[v]=true;
    
    for(auto i:adj[v]){
        if(!visited[i])
            dfs(i,visited,adj);
    }
}

    int makeConnected(int n, vector<vector<int>>& connections) {
    vector<bool> visited(n,false);
    int v=connections.size();
    if(v<n-1)
        return -1;
    
    vector<int> adj[n];
    for(int i=0;i<v;i++){
        adj[connections[i][0]].push_back(connections[i][1]);
        adj[connections[i][1]].push_back(connections[i][0]);
    }
    int ans=0;
    
    for(int i=0;i<n;i++){
        if(!visited[i]){
            dfs(i,visited,adj);
            ans++;
        }
    }
    
    return ans-1;
        
    }
};