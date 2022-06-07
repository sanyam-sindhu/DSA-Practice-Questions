class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int i=grid.size()-1;
        int cnt=0;
        while(i>=0)
        {
            int l=0;
            int r=grid[i].size()-1;
            while(l<=r)
            {
                int mid=l+(r-l)/2;
                if(grid[i][mid]>=0)
                    l=mid+1;
                else
                {
                    r=mid-1;
                    
                }
            }
            cnt =cnt+(grid[i].size()-l);
            i--;
        }
        return cnt;
        
    }
};