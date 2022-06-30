class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>> m;
        for(int i=0;i<n;i++)
        {
            string ele=strs[i];
            sort(ele.begin(),ele.end());
            m[ele].push_back(strs[i]);
            
        }
        vector<vector<string>> ans;
        for(auto i:m)
        {
            ans.push_back(i.second);
        }
        return ans;
        
    }
};