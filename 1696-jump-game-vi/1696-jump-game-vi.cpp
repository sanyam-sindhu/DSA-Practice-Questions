class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        int n=nums.size()-1;
        int x=nums[n];
        pq.push({x,n});
        for(int i=n-1;i>=0;i--)
        {
            while(pq.size()&& pq.top().second>i+k)
                pq.pop();
            x=pq.top().first+nums[i];
            pq.push({x,i});
        }
        return x;
        
    }
};