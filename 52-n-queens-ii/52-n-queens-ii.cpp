class Solution {
public:
    int count;
    vector<int> left,ud,ld;
    void solve(int n, int col)
    {
        if(col==n)
        {
            count++;
            return;
        }
        for(int row=0;row<n;row++)
        {
            if(left[row]==0 && ld[row+col]==0 && ud[n-1+col-row]==0)
            {
                left[row]=1;
                ld[row+col]=1;
                ud[n-1+col-row]=1;
                solve(n,col+1);
                left[row]=0;
                ld[row+col]=0;
                ud[n-1+col-row]=0;
            }
        }
    }
    int totalNQueens(int n) {
        count=0;
        left=vector<int>(n,0);
        ud=vector<int>(2*n-1,0);
        ld=vector<int>(2*n-1,0);
        solve(n,0);
        return count;
    }
};