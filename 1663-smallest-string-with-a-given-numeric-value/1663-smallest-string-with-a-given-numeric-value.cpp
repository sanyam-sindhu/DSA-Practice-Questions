class Solution {
public:
    string getSmallestString(int n, int k) {
        string s(n,'a');
        k-=n;
        while(k>0)
        {
            s[n-1]+=min(25,k);
            k-=min(25,k);
            n--;
        }
        return s;
        
    }
};