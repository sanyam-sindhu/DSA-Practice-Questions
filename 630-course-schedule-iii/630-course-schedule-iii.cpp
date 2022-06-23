class Solution {
public:
    static bool comp(vector<int> v1,vector<int> v2)
    {
        return v1[1]<v2[1];
    }
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(),courses.end(),comp);
        int ans=0;
        int n=courses.size();
        int curr=0;
        priority_queue<int> pq;
        for(int i=0;i<n;i++)
        {
            if(curr+courses[i][0]<=courses[i][1])
            {
                pq.push(courses[i][0]);
                curr=curr+courses[i][0];
                ans++;
            }
            else if(!pq.empty() && pq.top()>courses[i][0])
            {
                curr-=pq.top()-courses[i][0];
                pq.pop();
                pq.push(courses[i][0]);
            }
            
        }
        return pq.size();
        
        
    }
};