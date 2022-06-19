class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        int n=products.size();
        sort(products.begin(),products.end());
        vector<vector<string>>ans;
        string str="";
        for(auto i:searchWord){
            vector<string>temp; 
            str+=i;                     
            for(int i=0;i<n;i++){
                string s=products[i];
                if(s.substr(0,str.length())==str){              
                    temp.push_back(s);
                }
                else
                    continue;
                if(temp.size()==3)
                    break;         
            }
            ans.push_back(temp);
        }
        return ans;
        
    }
};