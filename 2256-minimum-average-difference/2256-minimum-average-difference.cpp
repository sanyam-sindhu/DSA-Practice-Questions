class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
    int n=nums.size();
    vector <long long int> prefixSum(n,0);
    prefixSum[0]=nums[0];
    for(int i=1; i<n; i++){
        prefixSum[i]=prefixSum[i-1]+nums[i];
    }
    long long int ans=0;
    long long int mx=INT_MAX;
    for(int i=0; i<n-1; i++){
        long long int av1=prefixSum[i]/(i+1);
        long long int av2=prefixSum[n-1]-prefixSum[i];
        av2=av2/(n-i-1);
        if(mx>abs(av2-av1)){
            ans=i;
            mx=abs(av1-av2);
        }
    }
    if(mx>prefixSum[n-1]/n){
        ans=n-1;
    }
    return ans;
        
    }
};