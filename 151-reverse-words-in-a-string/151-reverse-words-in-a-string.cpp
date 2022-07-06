class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string ans="";
        for(int i=0;i<=s.length();i++)
        {
            
            if(s[i]==' ' || s[i]=='\0')
            {
                if(ans.length()>0)
                    v.push_back(ans);
                ans="";
                
            }
            else
            {
                ans+=s[i];
            }
        }
        
        reverse(v.begin(),v.end());
        string str="";
        for(auto i:v)
        {
            str+=i+" ";
        }
        str.pop_back();
        return str;
        
    }
};