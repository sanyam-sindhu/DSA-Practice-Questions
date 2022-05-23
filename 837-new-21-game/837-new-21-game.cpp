class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        if(k==0||n>=k+maxPts)
            return 1.0;
        int maxRange=k-1+maxPts;
        vector<double>current(maxRange+1,0);
        current[0]=1.0;
        double runningsum=current[0];
        double result=0.0;
        for(int i=1;i<=n;i++){
            current[i]=runningsum/(double)maxPts;
           
            if(i<k){
                runningsum+=current[i];
            }
            else
                result+=current[i];
            if(i-maxPts>=0){
                runningsum-=current[i-maxPts];
            }
        }
        
        return result;
        
    }
};