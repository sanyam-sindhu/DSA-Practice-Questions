class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
         vector<pair<int,double>> adj[n];
        for(int i=0;i<edges.size();i++)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            double wt=succProb[i];
            adj[v].push_back({u,wt});
            adj[u].push_back({v,wt});
        }
        priority_queue<pair<double,int>> pq;
        vector<double> distto(n+1,0);
        pq.push({1.0,start});
        distto[start] = 0;
        while(!pq.empty())
        {
            double prob=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            for(auto it:adj[node])
            {
                double nextprob =it.second;
                int nextnode = it.first;
                if((prob*nextprob) > distto[nextnode])
                {
                    distto[nextnode] = prob*nextprob;
                    pq.push({distto[nextnode],nextnode});
                }
            }
        }
        return distto[end];
        
    }
};