class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> m1,m2;
        for(auto &x:s)
        {
            m1[x]++;
        }
        for(auto &y:t)
        {
            m2[y]++;
        }
        if(m1==m2)
            return true;
        else 
            return false;
        
    }
};