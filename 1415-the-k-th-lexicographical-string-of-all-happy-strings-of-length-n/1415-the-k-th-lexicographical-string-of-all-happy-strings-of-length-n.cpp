class Solution {
public:
    void backtrack(vector<string> &ans,vector<char> &c,string temp,int &n,int &k){
        if(ans.size()==k){
            return;
        }
        if(temp.size()==n){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<c.size();i++){
            if(temp.size()==0 || temp.back()!=c[i]){
                backtrack(ans,c,temp+c[i],n,k);
            }
        }
    }
    string getHappyString(int n, int k) {
        vector<char> c = {'a','b','c'};
        vector<string> ans;
        backtrack(ans,c,"",n,k);
        if(ans.size()>=k){
            return ans[k-1];
        }
        return "";
    }
};