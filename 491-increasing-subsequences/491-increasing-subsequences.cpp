class Solution {
public:
    set<vector<int>>s;
    vector<vector<int>>v;
    
    void dfs(vector<int>nums,vector<int>temp,int i,int prev){
        if(temp.size()>=2&& s.find(temp)==s.end()){
            v.push_back(temp);
            s.insert(temp);
        }
        if(i==nums.size())
          return;  
        
        if(nums[i]>=prev){
            
            temp.push_back(nums[i]);
            
            dfs(nums,temp,i+1,nums[i]);
            
            temp.pop_back();
            
        }
        dfs(nums,temp,i+1,prev);
        
        return;
        
        }
    
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        
        
        vector<int>temp;
        
        dfs(nums,temp,0,INT_MIN);        
        
        return v;
        
        
    }
};