class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int n=cards.size();
        unordered_map<int,int> m;
        int len=INT_MAX;
        int cnt=0;
        int l=0;
        int r=0;
        while(r<n)
        {
            m[cards[r]]++;
            cnt++;
            if(m[cards[r]]>1)
            {
                while(m[cards[r]]>1)
                {
                len=min(len,cnt);
                m[cards[l]]--;
                cnt--;
                l++;
                
                }    
            }
            r++;  
        }
        if(len==INT_MAX)
            return -1;
        else
            return len;
        
    }
};