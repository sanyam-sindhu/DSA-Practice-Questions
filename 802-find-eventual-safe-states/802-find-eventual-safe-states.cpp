class Solution {
public:
    bool dfs(int node,int vis[],int dfsVis[],vector<vector<int>>& graph)
    {
      vis[node] = 1;
      dfsVis[node] = 1;
      for (auto it: graph[node]) {
        if (!vis[it]) {
          if (dfs(it, vis,dfsVis,graph)) {
              
              return true;
          }
        } else if (dfsVis[it]) {
           
          return true;
        }
      }
      dfsVis[node] = 0;
      return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        int vis[n], dfsVis[n];
        memset(vis, 0, sizeof vis);
        memset(dfsVis, 0, sizeof dfsVis);
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            
                if(!dfs(i,vis,dfsVis,graph))
                    ans.push_back(i);
        }
       
        return ans;
        
    }
};