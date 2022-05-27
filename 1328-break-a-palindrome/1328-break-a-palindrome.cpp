class Solution {
public:
    string breakPalindrome(string s) {
        int n=s.length();
        int cnt=1;
        if(n==1)
            return "";
        
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!='a' && cnt==1)
            {
                s[i]='a';
                cnt--;
                return s;
            }
            
            
        }
        s[n-1]='b';
        
        return s;
        
        
        
    }
};