class Solution {
public:
    bool rec(int i, int a, int b,int c,int d, vector<int>& matchsticks, int sum)
    {
        if (i==matchsticks.size()) 
            return a==sum && b==sum && c==sum && d==sum;
        if (a+matchsticks[i]<=sum && rec(i+1,a+matchsticks[i],b,c,d,matchsticks,sum)) 
            return 1;
        if (b+matchsticks[i]<=sum && rec(i+1,a,b+matchsticks[i],c,d,matchsticks,sum)) 
            return 1;
        if (c+matchsticks[i]<=sum && rec(i+1,a,b,c+matchsticks[i],d,matchsticks,sum)) 
            return 1;
        if (d+matchsticks[i]<=sum && rec(i+1,a,b,c,d+matchsticks[i],matchsticks,sum)) 
            return 1;
        return 0;
    }
    bool makesquare(vector<int>& matchsticks) {
        int sum = 0;
        for (auto i:matchsticks) 
            sum+=i;
        if(sum%4!=0) 
            return false;
        sort(matchsticks.rbegin(), matchsticks.rend());
        return rec(0,0,0,0,0,matchsticks,sum/4);
    }
};