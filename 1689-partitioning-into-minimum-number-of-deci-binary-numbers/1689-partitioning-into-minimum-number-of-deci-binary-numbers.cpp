class Solution {
public:
    int minPartitions(string n) {
        int max1=INT_MIN;
        for(int i=0;i<n.size();i++)
        {
            max1=max(max1,n[i]-'0');
            
        }
        return max1;
        
    }
};