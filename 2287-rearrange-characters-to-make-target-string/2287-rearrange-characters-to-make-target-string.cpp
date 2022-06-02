class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        map<char,int> m;
		for(char ch:s)
			m[ch]++;
		int count=0;
		bool flag=true;
		while(flag){
			for(char c:target){
				m[c]--;
				if(m[c]<0) 
                    flag=false;
			}
			if(flag==true) count++;
		}
		return count;
        
    }
};