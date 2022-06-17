class Solution {
public:
    
    int findpar(vector<int> &par,int x)
    {
        if(par[x]==x)
            return x;
        return par[x]=findpar(par,par[x]);
    }
    bool equationsPossible(vector<string>& equations) {
        vector<int> par(26);
        for(int i=0;i<26;i++)
        {
            par[i]=i;
        }
        for(auto it:equations)
        {
            if(it[1]=='=')
            {
                par[findpar(par,it[0]-'a')]=findpar(par,it[3]-'a');
            }
        }
        for(auto it:equations)
        {
            if(it[1]=='!')
            {
                if(findpar(par,it[0]-'a')==findpar(par,it[3]-'a'))
                    return false;
            }
        }
        return true;
    }
};