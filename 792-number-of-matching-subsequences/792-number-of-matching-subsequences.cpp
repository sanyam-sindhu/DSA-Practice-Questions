class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int cnt=0,k=s.size();
        unordered_map<string,int>m;
        for(int i=0;i<words.size();i++){
            m[words[i]]++;
        }
        for(auto st:m){
           int index1=0,index2=0;
            string m=st.first;
            int p=m.size();
            while(index1<k && index2<p){
                if(s[index1]==m[index2]){
                    index1++;
                    index2++;
                }
                else{
                    index1++;
                }
            }
            if(index2==p){
                cnt+=st.second;
            }
        }
        return cnt;
    }
};