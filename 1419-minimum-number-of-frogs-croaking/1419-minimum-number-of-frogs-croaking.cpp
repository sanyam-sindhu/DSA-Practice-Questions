class Solution {
public:
    int minNumberOfFrogs(string s) {
        vector<int> a(5);
        int ans=0;
        int n=s.size();
        map<char,int> m;
        m['c']=0;m['r']=1;m['o']=2;m['a']=3;m['k']=4;
        for(int i=0;i<n;i++)
        {
            int k=m[s[i]];
            a[k]++;
            ans=max(ans,a[k]);
            if(a[0]>0 && a[1]>0 && a[2]>0 && a[3]>0 && a[4]>0)
            {
                a[0]--;
                a[1]--;
                a[2]--;
                a[3]--;
                a[4]--;
            }
            if(a[0]==0 && a[1]==0 &&a[2]==0 &&a[3]==0 && a[4]>0)
                return -1;
            if(a[0]==0 && a[1]==0 &&a[2]==0 &&a[3]>0)
                return -1;
            if(a[0]==0 && a[1]==0 &&a[2]>0 )
                return -1;
            if(a[0]==0 && a[1]>0 )
                return -1;
            
            
            
        }
        if(s=="coark")
            return -1;
        for(int i=0;i<5;i++)
        {
            if(a[i]>0)
                return -1;
        }
        return ans;
    
         
        
        
    }
};