class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        set<string> s1(words.begin(),words.end());
        set<string> s2(words.begin(),words.end());
        for(auto parts:s1)
        {
            for(int i=1;i<parts.size();i++)
            {
                s2.erase(parts.substr(i));
            }
        }
        int len=0;
        for(auto parts:s2)
        {
            len+=parts.size()+1;
        }
        return len;
        
        
        
    }
};