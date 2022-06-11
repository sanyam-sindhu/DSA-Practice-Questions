class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int N=numCourses;
        vector<int> adj[N];
	    for(auto it: prerequisites) {
	        adj[it[0]].push_back(it[1]);
            //cout<<it[0]<<endl;
            // cout<<it[1];
	    }
	    int cnt = 0;
	    vector<int> indegree(N, 0);
	    for(int i=0; i<N; i++) {
	        for(auto it: adj[i]) {
	            indegree[it]++;
	        }
	    }
	    queue<int> q;
	    for(int i=0; i<N; i++) {
	        if(indegree[i]==0) q.push(i);
	    }
	    while(!q.empty()) {
	        int node = q.front();
	        q.pop();
	        cnt++;
	        for(auto it: adj[node]) {
	            indegree[it]--;
	            if(indegree[it]==0) 
                    q.push(it);
	        }
	    }
	    return (cnt==N);        
        
    }
};