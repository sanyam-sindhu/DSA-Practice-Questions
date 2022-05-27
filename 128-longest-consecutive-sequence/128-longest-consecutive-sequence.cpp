class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0) {             
            return 0;
        }
        sort(nums.begin(), nums.end());
        vector<int> v;                             
        int cnt = 1;                 
        
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i]==nums[i-1]) {               
                continue;                                
            } 
            if(nums[i] - nums[i-1] == 1) {
                cnt++;
            }
            else{
                v.push_back(cnt);
                cnt = 1;
            }
        }
        v.push_back(cnt);
        int ans = INT_MIN;
        for(int i = 0; i < v.size(); i++) {           
            ans = max(ans,v[i]);
        }
        return ans;
    }
};