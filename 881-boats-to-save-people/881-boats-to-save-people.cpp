class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        int i=0;
        int j=people.size()-1;
        int ans=0;
        sort(people.begin(),people.end());
        while(i<=j)
        {
            if(people[i]+people[j]>limit)
            {
               ans++;
                j--;
                
            }
            else
            {
                ans++;
                i++;
                j--;
            }
        }
        return ans;
    }
};