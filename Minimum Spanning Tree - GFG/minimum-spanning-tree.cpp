// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        int key[V];
        int parent[V];
        bool mst[V];
        for(int i=0;i<V;i++)
        {
            key[i]=INT_MAX;
            parent[i]=-1;
            mst[i]=false;
        }
        key[0]=0;
        parent[0]=-1;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,0});
        while(!pq.empty())
        {
            int node=pq.top().second;
            pq.pop();
            mst[node]=true;
            for(auto it : adj[node])
            {
                int Node=it[0];
                int wt=it[1];
                if(mst[Node]==false && wt<key[Node])
                {
                    key[Node]=wt;
                    parent[Node]=node;
                    pq.push({key[Node],Node});
                }
            }
        }
        int sum=0;
        for(int i=1;i<V;i++)
        {
            sum+=key[i];
        }
        return sum;
        // code here
    }
};

// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends