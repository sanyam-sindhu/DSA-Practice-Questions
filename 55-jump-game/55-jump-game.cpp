class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mx=0; 
        int i=0;
        while(i<=mx){
            int curr=i+nums[i];
            if(curr>=nums.size()-1) 
                return true;
            mx=max(mx,curr);
            i++;
        }
        return false;
    }
};