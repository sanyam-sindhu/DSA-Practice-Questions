class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n=spells.size();
		int m=potions.size();

		sort(potions.begin(),potions.end()); 
		vector<int> ans(n, 0); 

		for(int i = 0; i < n; ++i)  
		{                 
			int r = potions.size()-1;  
			int l  = 0;
			while(l<=r)  
			{
				int mid = l+ (r-l)/2;
				long long p = potions[mid], s = spells[i];
				if(p*s <success)
                    l = mid+1;
				else 
                    r=mid-1;
			}
            ans[i] = m -l;
        }

			 

		return ans;
        
    }
};