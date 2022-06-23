class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string,int>m;
        int n=messages.size();
        for(int i=0;i<n;i++)
        {
            int count=1;
            for (int j=0;messages[i][j]!='\0';j++)
            {
            if (messages[i][j]==' ')
                count++;    
            }
            m[senders[i]]+=count;
        }
        /*for(auto it:m)
        {
            cout<<" "<<it.first<<" "<<it.second<<" ";
        }*/
        string temp="";
        int ans=INT_MIN;
        for(auto it:m)
        {
            if(it.second>ans)
            {
                ans=it.second;
                temp=it.first;
            }
            else if(it.second==ans)
            {
                temp=max(temp,it.first);
            }
            
            
        }
        return temp;
        
    }
};