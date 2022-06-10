// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    bool checkBfs(int node, vector<int> &colour, vector<int> adj[]){
         queue<int> q;
         q.push(node);
         colour[node]=1;
         while(!q.empty()){
             int temp = q.front();
             q.pop();
             for(auto x:adj[temp]){
                 if(colour[x]==-1){
                     colour[x]=1-colour[temp];
                     q.push(x);
                 }
                 else if(colour[x]==colour[temp]){
                     return false;
                 }
             }
         }
         return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    vector<int> colour(V,-1);
	    for(int i=0;i<V;i++){
	        if(colour[i]==-1){
	            if(!checkBfs(i,colour,adj)){
	                return false;
	            }
	        }
	    }
	    return true;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends