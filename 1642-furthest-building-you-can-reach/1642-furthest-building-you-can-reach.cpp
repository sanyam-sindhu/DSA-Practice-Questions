class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int i=0, n=size(heights), jumpHeight;
        priority_queue<int, vector<int> ,greater<int>> pq;
        while(i<n-1 and size(pq)<ladders){
            jumpHeight = heights[i+1]-heights[i];
            if(jumpHeight > 0){
                pq.push(jumpHeight);
            }
            i++;
        }
        
        while(i<n-1){
            jumpHeight=heights[i+1]-heights[i];
            if(jumpHeight > 0){
                if(!pq.empty() and pq.top()<jumpHeight){
                    bricks -= pq.top();
                    pq.pop();
                    pq.push(jumpHeight);
                }
                else 
                    bricks-=jumpHeight;
            }
            if(bricks < 0) 
                return i;
            ++i;
        }
        return i;
    }
};