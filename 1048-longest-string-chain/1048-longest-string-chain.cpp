class Solution {
public:
    bool check(string &a,string &b)
    {
        if(a.size()!=b.size()+1)
            return false;
        int i=0,j=0;
        while(i<a.size())
        {
            if(a[i]==b[j])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        if(i==a.size() and j==b.size())
            return true;
        else
            return false;
    }
    
    static bool comp(string &a,string &b)
    {
        return a.size()<b.size();
    }
    
    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),comp);
        int n=words.size();
        vector<int>dp(n,1);
        int mx=1;
        for(int i=0;i<n;i++)
        {
            for(int prev=0;prev<i;prev++)
            {
                if(check(words[i],words[prev]) and 1+dp[prev]>dp[i])
                {
                    dp[i]=1+dp[prev];
                }
            }
            if(dp[i]>mx){
                mx=dp[i];
            }
        }
        return mx;
    }
};
