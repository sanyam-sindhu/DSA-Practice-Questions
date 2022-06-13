class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> distTo(n+1,INT_MAX);
        vector<pair<int, int>> graph[n+1];
        for(auto time : times){
            graph[time[0]].push_back({time[1], time[2]});
        }
        distTo[k]=0;
        pq.push({0,k});

        while(!pq.empty())
        {
            int dist=pq.top().first;
            int node=pq.top().second;
            pq.pop();
		    for(auto it:graph[node]){
                int Node=it.first;
                int weight=it.second;
                
                if(dist + weight <distTo[Node]){
                    distTo[Node] = dist + weight;
                    pq.push({dist + weight, Node});
                }
            }
        }
        
        int ans=INT_MIN;
        for(int i=1;i<distTo.size(); i++){
            ans=max(ans,distTo[i]);
        }
        if(ans==INT_MAX)
            return -1;
        else 
            return ans;
        
        
        
    }
};