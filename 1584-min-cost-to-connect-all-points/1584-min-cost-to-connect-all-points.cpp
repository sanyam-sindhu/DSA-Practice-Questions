class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
         vector<vector<pair<int,int>>>adj;
        for(int i=0;i<points.size();i++){
            vector<pair<int,int>>temp;
            for(int j=0;j<points.size();j++){
                int dist=0;
                if(i!=j){
                     dist=abs(points[j][0]-points[i][0])+abs(points[j][1]-points[i][1]);
                }
                temp.push_back({j,dist});
            }
            adj.push_back(temp);
        }
        
        vector<int>key(n,INT_MAX);
        vector<bool> mst(n,false);
       
        key[0]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,0});
        while(!pq.empty())
        {
            int node=pq.top().second;
            int dist=pq.top().first;
            pq.pop();
            mst[node]=true;
            for(auto it:adj[node])
            {
                int Node=it.first;
                int wt=it.second;
                if(!mst[Node] && wt<key[Node])
                {
                    key[Node]=wt;
                    pq.push({wt,Node});
                }
            }
            
            
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=key[i];
        }
        return ans;
        
    }
};