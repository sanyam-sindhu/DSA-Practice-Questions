class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        vector<int> v(n,0);
        int curr=INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            if(temp[i]>=curr)
            {
                curr=temp[i];   
            }
            else
            {
                for(int ind=i+1;ind<n;)
                {
                    if(temp[ind]>temp[i]){
                        v[i]=ind-i;
                        break;
                    }
                    else
                        ind+=v[ind];
                      
                }
                
            }   
            
        }
        return v;
        
        
    }
};