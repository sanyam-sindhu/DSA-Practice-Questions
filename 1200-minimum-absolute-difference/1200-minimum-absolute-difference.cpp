class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
       int min=INT_MAX;
        int n = arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;++i){
            if((arr[i+1]-arr[i])<min){
                min = (arr[i+1]-arr[i]);
            }
      }
       
        for(int i=0;i<n-1;++i){
            if(arr[i+1]-arr[i]==min){
                ans.push_back({arr[i],arr[i+1]});
            }
      }
        return ans;
        
    }
};