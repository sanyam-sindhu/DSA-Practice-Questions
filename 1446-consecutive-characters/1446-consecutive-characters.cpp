class Solution {
public:
    int maxPower(string s) {
        int cnt=0;
        int mx=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==s[i+1])
                cnt++;
            else
                cnt=0;
            mx=max(cnt+1,mx);
        }
        return mx;
    }
};