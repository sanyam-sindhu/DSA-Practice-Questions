class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;int j=0;
        map<char,int> m;
        int mx=0;
        
        while(j<s.length())
        {
            m[s[j]]++;
            if(m.size()>(j-i+1))
                j++;
            else if(m.size()==j-i+1)
            {
                mx=max(mx,j-i+1);
                j++;
            }
            else if(m.size()<j-i+1)
            {
                while(m.size()<j-i+1)
                {
                    m[s[i]]--;
                    if(m[s[i]]==0)
                        m.erase(s[i]);
                    i++;
                    
                }
                j++;
            }
            
            
        }
        return mx;
        
    }
};