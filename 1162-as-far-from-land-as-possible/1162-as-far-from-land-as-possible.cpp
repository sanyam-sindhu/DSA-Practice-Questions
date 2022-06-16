class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int n=grid.size();
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                    q.push({i,j});
                
            }
        }
        if(q.size()==0 || q.size()== (n*n))
            return -1;
        vector<pair<int,int>> dir={{1,0},{0,1},{-1,0},{0,-1}};
        int cnt=0;
        while(!q.empty())
        {
            cnt++;
            int s=q.size();
            while(s--)
            {
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
           
            for(auto it:dir)
            {
                int newx=i+it.first;
                int newy=j+it.second;
                if(newx>=0 && newx<grid.size() && newy>=0 && newy<grid[0].size() && grid[newx][newy]==0)
                {
                    q.push({newx,newy});
                    grid[newx][newy]=1;
                }
                
            }
            
        }
        }
        return cnt-1;
        
    }
};