class Solution {
public:
    int window(vector<int>&arr,int k)
        {
                int i=0;
                int j=0;
                int n=arr.size();
                int sum=0;
                long long int ans=0;
                while(j<n)
                {
                        sum+=arr[j];
                        while(j-i+1>k)
                        {
                                sum-=arr[i];
                                i++;
                        }
                        if(j-i+1==k)
                                ans+=sum;
                        j++;
                }
                return ans;
        }
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int finasum=0;
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)
            {
                finasum+=window(arr,i);
}
        }
        return finasum;
        
    }
};