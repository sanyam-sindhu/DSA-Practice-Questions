class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> q;
        for(auto i:piles)
        {
            q.push(i);
        }
        for(int i=0;i<k;i++)
        {
            int ele=q.top();
            q.pop();
            ele=ele-floor(ele/2);
            q.push(ele);
        }
        int sum=0;
        while(!q.empty())
        {
            sum+=q.top();
            q.pop();
        }
        return sum;
        
    }
};