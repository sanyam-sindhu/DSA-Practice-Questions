class Solution {
public:
    void permute(string input, string output, vector<string> &ans){
        if(input.length() == 0){
            ans.push_back(output);
            return;
        }
        
        string out1  = output;
        string out2 = output;
        
        if(input[0] >= 'a' && input[0] <= 'z' || input[0] >= 'A' && input[0] <= 'Z'){
            out1.push_back(tolower(input[0]));
            out2.push_back(toupper(input[0]));
            
            input.erase(input.begin() + 0);
            
            permute(input,out1,ans);
            permute(input,out2, ans);
            return;
        }
        else{ 
            out1.push_back(input[0]);
            input.erase(input.begin() + 0);
            permute(input,out1,ans);
            
            return;
        }
        
        
        
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        permute(s,"", ans);
        return ans;
    }

};