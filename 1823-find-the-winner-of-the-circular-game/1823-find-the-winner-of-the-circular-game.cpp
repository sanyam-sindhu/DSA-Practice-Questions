class Solution {
public:
     int number(vector<int> arr,int k,int idx)  
    {
        if(arr.size()==1)
            return arr[0]; 
        
        idx=(idx+k)%arr.size();
        arr.erase(arr.begin()+idx);
        return number(arr,k,idx); 
    }
    
    int findTheWinner(int n, int k) {
        if(n==1 || k==1)
            return n;
        vector<int>arr;
		
        for(int i=1;i<=n;i++)
            arr.push_back(i);
        return number(arr,k-1,0) ;   
    }
};