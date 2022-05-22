class Solution {
public:
    int numSub(string s) {
        int res=0;
        int i=0;
        while(i<s.size())
        {
            if(s[i]=='1')
            {
                long long count=0;
                while(s[i]=='1')
                {
                    count++;
                    i++;
                }
                count=((count*(count+1))%1000000007)/2; 
                res=(res+count)%1000000007;
            }
            i++;
        }
        return res;
        
        
    }
};