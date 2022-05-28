class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<int>v(51,false);
        for(int i=0;i<ranges.size();i++)
        {
            for(int j=0;j<ranges[0].size();j++)
            {
                int val1=ranges[i][0];
                int val2=ranges[i][1];
                for(int k=val1;k<=val2;k++)
                {
                    v[k]=true;
                }
            }
        }
        for(int i=left;i<=right;i++)
        {
            if(v[i]==false)
                return false;
            
        }
        return true;
        
        
    }
};