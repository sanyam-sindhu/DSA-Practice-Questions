class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int n=s.length();
        int count=0;
        for(int i=0;i+k<=n;i++)
        {
           int curr=stoi(s.substr(i,k));
            if(curr>0 && num%curr==0)
                count++;
        }
        return count;
        
    }
};