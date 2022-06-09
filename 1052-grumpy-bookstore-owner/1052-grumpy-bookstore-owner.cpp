class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        
        int dir=0;
        int indir=0;
        int max_indir = INT_MIN;
        int i=0,j=0;
        while(j<customers.size())
        {   
            if(grumpy[j]==0) 
            {
				dir+=customers[j];
				customers[j] = 0;
			}
            
            indir+=customers[j];
            
            int k=j-i+1; 
            
            if(k<minutes) 
                j++;
            else if(k==minutes)
            {
                max_indir= max(max_indir,indir);
                indir-=customers[i];
                i++;
                j++;
            }
        }
        return max_indir + dir;
    }
};