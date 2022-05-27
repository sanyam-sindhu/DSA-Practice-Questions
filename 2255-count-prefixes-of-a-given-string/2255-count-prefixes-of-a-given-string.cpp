class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        unordered_map<string, int> ump;
        for(int i = 0; i < words.size(); ++i)
            ump[words[i]]++;
        int length = s.length();
        int count = 0;
        for(int i = 1; i <= s.length(); ++i){
            if(ump.find(s.substr(0, i)) != ump.end())
                count += ump[s.substr(0, i)];
        }
        return count;
    }
};