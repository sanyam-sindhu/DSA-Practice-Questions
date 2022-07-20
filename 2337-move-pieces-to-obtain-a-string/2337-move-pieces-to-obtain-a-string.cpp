class Solution {
public:
    bool canChange(string start, string target) {
        int n=start.length();
        int i=0;
        int j=0;
        while(i<n && j<n)
        {
            while(start[i]=='_')
                i++;
            while(target[j]=='_')
                j++;
            if(i==n || j==n) break;
            if(start[i]!=target[j])
                return false;
            if(start[i]=='L' && i<j)
                return false;
            if(start[i]=='R' && i>j)
                return false;

                i++;
                j++;
        }
        cout<<i<<j;
        while(i<n && start[i]=='_')
            i++;
        while(j<n && target[j]=='_')
            j++;
        return (i==n && j==n);
        
        
    }
};