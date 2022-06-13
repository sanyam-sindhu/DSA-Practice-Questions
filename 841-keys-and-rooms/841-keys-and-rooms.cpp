class Solution {
public:
    void dfs(int node,vector<vector<int>>& rooms,vector<int> &vis)
    {
        vis[node]=1;
        for(auto it:rooms[node])
        {
            if(!vis[it]){
            dfs(it,rooms,vis);
            }
        }
        return ;
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int> vis(n,0);
        dfs(0,rooms,vis);
        
        for(int i=1;i<vis.size();i++)
        {
            if(vis[i]==0)
                return false;
                
        }
        return true;
        
        
    }
};