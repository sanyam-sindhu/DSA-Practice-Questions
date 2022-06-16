class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        queue<pair<int,int>> q;
         vector<vector<int>> res(m, vector<int>(n,INT_MAX));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==0)
                {
                    q.push({i,j});
                    res[i][j]=0;
                }
            }
            
        }
        vector<pair<int,int>> dir={{0,-1},{-1,0},{1,0},{0,1}};
        
        while(!q.empty())
        {
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            for(auto it:dir)
            {
                int newx=i+it.first;
                int newy=j+it.second;
                 if(newx>=0 and newx<m and newy>=0 and newy<n)
                 {
                     if(res[newx][newy]>res[i][j]+1)
                     {
                         res[newx][newy]=res[i][j]+1;
                         q.push({newx,newy});
                     }
                 }
            }
            
        }
            
            
        return res;
        
        
    }
};