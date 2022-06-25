class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea =0;
        int mini=0;
        int maxi=height.size()-1;
        while(mini!=maxi)
        {
            if(height[mini]>height[maxi])
                swap(mini,maxi);
            int newarea=height[mini]*(abs(mini-maxi));
            if(newarea>maxarea)
                maxarea=newarea;
            
            if(mini>maxi)
                mini--;
            else
                mini++;
        }
        return maxarea;
        
    }
};