class Solution {
public:
        vector<int> vis;
        int solve(int n, int i){
                if(i>n)return 1;
        int ans = 0;
                for(int j = 1; j <= n; j++){
                    if(vis[j] ==0 and (j % i == 0 || i % j == 0)){
                            vis[j] = 1;
                            ans += solve(n, i+1);
                            vis[j] = 0;
                    }
                }
                return ans;
        }
    int countArrangement(int n) {
        vis.resize(n+1,0);
        return solve(n,1);
    }
};