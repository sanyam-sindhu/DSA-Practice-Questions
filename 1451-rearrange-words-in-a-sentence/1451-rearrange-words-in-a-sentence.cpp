class Solution {
public:
   
    string arrangeWords(string text) {
        int n=text.length();
        vector<string> v;
        string ans="";
        text[0]=text[0]+32;
        for(int i=0;i<n;i++)
        {
            if(text[i]!=' ')
                ans+=text[i];
            if(text[i]==' ' || i==n-1)
            {
                v.push_back(ans);
                ans="";
                if(i==n-1)
                    break;
            }
                
            
        }
        stable_sort(v.begin(),v.end(),[](string a,string b)->bool
             {
                 return a.size()<b.size();
             });
        string str="";
        for(auto i:v)
        {
            str+=i+" ";
        }
        str[0]=str[0]-32;
       
        str.pop_back();
        return str;
        
    }
};