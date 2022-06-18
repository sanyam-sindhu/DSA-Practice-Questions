class WordFilter {
public:
    unordered_map<string,int>mp;
    WordFilter(vector<string>& words) {
    for(int i=0;i<words.size();i++)
    {
        string word=words[i];
        int len=word.size();
        for(int j=1;j<=len;j++)
        {
            string p=word.substr(0,j);
            for(int k=0;k<len;k++)
            {
                string s=word.substr(k,len);
                mp[p+"|"+s]=i;
            }
        }
    }  
}

int f(string prefix, string suffix) {
    
    string str=prefix+"|"+suffix;
    if(mp.count(str))
        return mp[str];
    return -1;  
}
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */