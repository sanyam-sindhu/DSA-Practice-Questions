class Solution {
public:
    vector<int> sumZero(int n) {
        int right=0;
        int left=0;
        vector<int> v;
        if(n%2!=0)
            v.push_back(0);
        for(int i=0;i<n-1;i++)
        {
            if(i%2==0)
            {
                right++;
                v.push_back(right);
            }
            else
            {
                left--;
                v.push_back(left);
            }
        }
        if(n%2==0)
        {
            v.push_back(--left);
        }
            
        
        
        sort(v.begin(),v.end());
        return v;
        
        
    }
};