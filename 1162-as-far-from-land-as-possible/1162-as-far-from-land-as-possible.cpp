class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        vector<vector<int>> ans(grid.size(),vector<int>(grid[0].size(),INT_MAX));
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    ans[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        vector<pair<int,int>> dir={{0,1},{1,0},{-1,0},{0,-1}};
        while(!q.empty())
        {
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            for(auto it:dir)
            {
                int newx=i+it.first;
                int newy=j+it.second;
                if(newx>=0 && newx<n && newy>=0 && newy<m )
                {
                    if(ans[newx][newy]>ans[i][j]+1)
                    {
                        ans[newx][newy]=ans[i][j]+1;
                        q.push({newx,newy});
                    }
                    
                }
            }
            
        }
        int mx=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mx=max(mx,ans[i][j]);
            }
        }
        if(mx==INT_MAX || mx==0)
            return -1;
        else
            return mx;
        
    }
};