class Solution {
public:
    void solve(int index,int &ans,int n,int arr[]){
        if(index==n && arr[0]!=0){
            ans++;
            return;}  
        
        
        for(int i=index;i<10;i++){
            swap(arr[i],arr[index]);
            solve(index+1,ans,n,arr);
            swap(arr[i],arr[index]);
        }
    }
    
    int countNumbersWithUniqueDigits(int n) {
        int ans=0;
        
        int arr[]={0,1,2,3,4,5,6,7,8,9};
      
        for(int i=0;i<=n;i++)
            solve(0,ans,i,arr);
        
        ans++; 
        return ans;
    }
};