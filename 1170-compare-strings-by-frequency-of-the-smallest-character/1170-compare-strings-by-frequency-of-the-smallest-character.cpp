class Solution {
public:
    int solve(string s)
    {
        map<char,int> m;
        for(auto i:s)
        {
            m[i]++;
        }
        for(auto it:m)
        {
            return it.second;
        }
        return 0;
    }
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        
        vector<int> v1;
        vector<int> v2;
        vector<int> v;
        for(int i=0;i<queries.size();i++)
        {
            v1.push_back(solve(queries[i]));
        }
        for(int i=0;i<words.size();i++)
        {
            v2.push_back(solve(words[i]));
        }
        for(int i=0;i<v1.size();i++)
        {
            int cnt=0;
            for(int j=0;j<v2.size();j++)
            {
                if(v2[j]>v1[i])
                    cnt++;
            }
            v.push_back(cnt);
        }
        return v;
        
        
        
    }
};