 class Solution {
 	public:
     void dfs(vector<vector<char>>& grid, vector<vector<bool>>& vis, int i, int j, int m, int n) {
 		if (i < 0 || i >= m || j < 0 || j >= n) 
            return;
 		if (grid[i][j] == '0' || vis[i][j]) 
            return;
 		vis[i][j] = true;
 		dfs(grid,vis,i+1,j,m,n);
 		dfs(grid,vis,i,j+1,m,n);
 		dfs(grid,vis,i-1,j,m,n);
 		dfs(grid,vis,i,j-1,m,n);
 	}
 	int numIslands(vector<vector<char>>& grid) {
 		if (grid.empty()) 
            return 0;

 		int m = grid.size();
 		int n = grid[0].size();
 		vector<vector<bool>>vis(m, vector<bool>(n, false));

 		int ans=0;
 		for (int i = 0; i < m; i++) {
 			for (int j = 0; j < n; j++) {
 				if (grid[i][j] == '1' && !vis[i][j]) {
 					dfs(grid, vis, i, j, m, n);
 					ans++;
 				}
 			}
 		}

 		return ans;
 	}
 	};
