class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int N=numCourses;
        vector<int> adj[N];
        for(auto it:prerequisites)
        {
            adj[it[1]].push_back(it[0]);
        }
        vector<int> degree(N,0);
        for(int i=0;i<N;i++)
        {
            for(auto it:adj[i])
            {
                degree[it]++;
            }
        }
        queue<int> q;
        vector<int> v;
        for(int i=0;i<N;i++)
        {
            if(degree[i]==0)
                q.push(i);
        }
        int cnt=0;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            v.push_back(node);
            cnt++;
            for(auto it:adj[node])
            {
                degree[it]--;
                if(degree[it]==0)
                    q.push(it);
            }
        }
        if(cnt==N)
            return v;
        else 
            return {};
        
    }
};