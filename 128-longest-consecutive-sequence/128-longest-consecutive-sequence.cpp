class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        
        sort(nums.begin(), nums.end());
        int cnt = 1;
        vector<pair<int, int>> v;   
        for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]){
                cnt++;
            }
            else{
                v.push_back(make_pair(nums[i-1],cnt));
                cnt = 1;
            }
        }
        v.push_back(make_pair(nums[nums.size()-1], cnt)); 
        int ans = INT_MIN;
        int i=0 ,j=1;
        
        
        while(j<v.size()){
            if(v[j].first - v[j-1].first == 1){
                ans = max(ans, j-i+1);
                j++;
            }
            else{
                i = j;
                j++;
            }
        }
        return max(ans,j-i);
        
    }
};