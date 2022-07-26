class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> m;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        int cnt=0;
       
        vector<int> v(1000000,0);
        for(auto i:m)
        {
            if(v[i.second]==0)
                v[i.second]=1;
            else
            {
                while(v[i.second]==1)
                {
                    i.second--;
                    cnt++;
                    if(i.second==0)
                        break;
                    
                }
                if(i.second>=0)
                    v[i.second]=1;
                
            }
        }
        
        return cnt;
        
    }
};