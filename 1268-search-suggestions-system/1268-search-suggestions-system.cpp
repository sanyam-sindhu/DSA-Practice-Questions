class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(),products.end());
        int n=searchWord.size();
        vector<vector<string>> res;
 
        for(int i=1;i<=n;i++)
        {
            string search=searchWord.substr(0,i);
           
            vector<string> temp;
            for(int j=0;j<products.size();j++)
            {  
                if(search==products[j].substr(0,i))
                {
                    temp.push_back(products[j]);
                }
             
                if(temp.size()==3)
                    break;
            }
            
            res.push_back(temp);
        }
        
        return res;
    }
};