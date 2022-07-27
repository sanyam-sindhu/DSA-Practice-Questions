class Solution {
public:
    int numSplits(string s) {
        
        unordered_set<int> s1,s2;
        int n=s.length();
        if(n==1)
            return 0;
        int cnt=0;
        vector<int> prefix(n-1,0);
        vector<int> suffix(n-1,0);
        for(int i=0;i<n-1;i++)
        {
            s1.insert(s[i]);
            s2.insert(s[n-i-1]);
            
            prefix[i]=s1.size();
            suffix[n-2-i]=s2.size();
        }
        for(auto it:prefix)
            cout<<it<<" ";
        cout<<endl;
        for(auto it:suffix)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        for(int i=0;i<n-1;i++)
        {
            if(prefix[i]==suffix[i])
                cnt++;
        }
        return cnt;
        
    }
};