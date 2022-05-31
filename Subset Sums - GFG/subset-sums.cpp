// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
void sum1(int idx,int N,vector<int> &arr,int sum,vector<int> &v)
{
    if(idx==N)
    {
        v.push_back(sum);
        return ;
    }
    sum1(idx+1,N,arr,sum+arr[idx],v);
    sum1(idx+1,N,arr,sum,v);
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        int sum=0;
        vector<int> v;
        sum1(0,N,arr,sum,v);
        return v;
        
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends