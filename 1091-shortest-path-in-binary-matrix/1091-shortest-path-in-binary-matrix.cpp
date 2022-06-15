class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>> q;
        q.push({{0,0},1});
        vector<vector<bool>> vis(grid.size(),vector<bool>(grid.size(),false));
        vis[0][0]=true;
        if(grid[0][0]==1)
            return -1;
        if(grid[0][0]==0 && grid.size()==1 && grid[0].size()==1)
            return 1;
        
        
        while(!q.empty())
        {
            pair<int,int> p=q.front().first;
            int x=p.first;
            int y=p.second;
            int len=q.front().second;
            q.pop();
            vector<pair<int,int>>dir ={{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,-1},{1,-1}, {-1,1}};
            for(pair<int,int> it:dir)
            {
                int newx=x+it.first;
                int newy=y+it.second;
                if(newx>=0 && newy>=0 && newx<grid.size() && newy<grid.size() && grid[newx][newy]==0 && !vis[newx][newy])
                {
                    q.push({{newx,newy},len+1});
                    vis[newx][newy]=1;
                    if(newx==grid.size()-1 && newy==grid.size()-1)
                        return len+1;
                    
                }
            }
            
            
        }
        return -1;
        
        
        
    }
};