class Solution {
public:
    static bool comp(pair<int,int> v1,pair<int,int> v2)
    {
        return v1.first>v2.first;
    }
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int> indeg(n);
        for(auto it:roads)
        {
            indeg[it[0]]++;
            indeg[it[1]]++;
        }
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            v.push_back({indeg[i],i});
        }
        sort(v.begin(),v.end(),comp);
        int temp=n;
        vector<int> v1(n);
        for(int i=0;i<v.size();i++)
        {
            v1[v[i].second]=temp--;
            
        }
        long long ans=0;
        for(auto it:roads)
        {
            ans+=(v1[it[0]]+v1[it[1]]);
            
        }
        return ans;
    }
};