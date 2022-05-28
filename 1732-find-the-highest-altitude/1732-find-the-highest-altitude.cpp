class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> dis(n+1,0);
        
        dis[0]=0;
        for(int i=0;i<n;i++)
        {
            if(i==0)
                dis[i+1]=gain[i]-dis[0];
            else{
            dis[i+1]=gain[i]+dis[i];
            }
            
        }
        
        int mx=dis[0];
        for(int i=1;i<n+1;i++)
        {
            if(dis[i]>mx)
                mx=dis[i];
        }
        return mx;
        
    }
};