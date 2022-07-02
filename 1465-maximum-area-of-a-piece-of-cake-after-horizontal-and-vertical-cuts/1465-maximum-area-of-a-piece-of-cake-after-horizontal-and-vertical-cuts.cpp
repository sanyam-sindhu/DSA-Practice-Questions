class Solution {
public:
    
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        long long mod = 1000000007;
        sort(hc.begin(),hc.end());
        int ymin=hc[0];
        for(int i=1;i<hc.size();i++)
        {
            ymin=max(ymin,hc[i]-hc[i-1]);
            
        }
        int m=hc.size();
        sort(vc.begin(),vc.end());
        ymin=max(ymin,h-hc[m-1]);
        int xmin=vc[0];
        for(int i=1;i<vc.size();i++)
        {
            xmin=max(xmin,vc[i]-vc[i-1]);
        }
        int n=vc.size();
        xmin=max(xmin,w-vc[n-1]);
        return (int)(ymin % mod* xmin % mod);
        
        
    }
};