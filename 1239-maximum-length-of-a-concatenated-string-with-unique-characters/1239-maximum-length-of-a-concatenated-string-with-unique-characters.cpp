class Solution {
public:
    int ans=0;
    void solve(vector<string>& arr, int i, string curr) {
        vector<int> count(26,0);
        for(int i=0;i<curr.size();i++) {
            if(count[curr[i]-'a']>=1) {
                return;
            }
            else
                count[curr[i]-'a']++;
        }
        if(i>=arr.size()) {
            ans=max(ans,(int)curr.size());
            return;
        }
        solve(arr, i+1, curr);
        solve(arr, i+1, curr+arr[i]);
    }
    
    int maxLength(vector<string>& arr) {
        string curr;
        solve(arr,0,curr);
        return ans;
    }
    
    
};