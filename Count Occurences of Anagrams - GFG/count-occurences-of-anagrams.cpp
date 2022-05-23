// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string p, string s) {
	    map<char,int> maps,mapp;
   int n = (int)s.size(),k = (int)p.size();
    
    for(auto itr : p)
        mapp[itr]++;
    
    for(int i=0;i<k;i++)
        maps[s[i]]++;
    
    int ans=0;
    for(int i=0;i<n-k+1;i++)
    {
        if(mapp == maps)
        {
            ans++;
        }
        maps[s[i]]--;
        if(maps[s[i]] == 0)
        {
            maps.erase(s[i]);
        }
        if(i+k < n)
        {
            maps[s[i+k]]++;
        }
    }
    
    return ans;
	    // code here
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends