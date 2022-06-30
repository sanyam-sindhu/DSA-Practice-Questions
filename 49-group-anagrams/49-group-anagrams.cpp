class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>>m;
        for(auto str:strs)
        {
            map<char,int> m1;
            for(auto ch:str)
            {
                
                m1[ch]++;
            }
            m[m1].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto i:m)
        {
            ans.push_back(i.second);
            
        }
        return ans;
        
    }
};