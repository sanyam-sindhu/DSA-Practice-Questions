class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<int> pq(target.begin(),target.end());
        long long sum=0;
        for(auto x:target)
        {
            sum+=x;
        }
        while(true)
        {
            long long maxval=pq.top();
            pq.pop();
            long long diff=sum-maxval;
            if(maxval==1 || diff==1)
                return true;
            if(maxval<diff|| diff==0 || maxval%diff==0)
                return false;
            maxval %= diff;
            sum=diff+maxval;
            pq.push(maxval);
        }
        return true;
    }
};