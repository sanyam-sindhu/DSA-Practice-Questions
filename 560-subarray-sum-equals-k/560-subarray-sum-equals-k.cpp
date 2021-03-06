class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0; 
                 
        int len=nums.size(), count=0; 
        map<int,int> m;         
        m[0]=1;             
        for(int i=0;i<len;i++){
            sum+=nums[i];
            count+=m[sum-k];
            m[sum]++; 
        }
        return count;
    }
};