class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        if(nums1.size()>nums2.size())
        {
            swap(nums1,nums2);
        }
        //for(auto i:nums1)
            //cout<<" "<<i<<" ";
        //cout<<".......";
        //for(auto i:nums2)
            //cout<<" "<<i<<" ";
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int prev=0;
        for(int i=0;i<nums1.size();i++)
        {
            int l=prev;
            int r=nums2.size()-1;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(nums2[mid]==nums1[i])
                {
                    v.push_back(nums1[i]);
                    nums2.erase(nums2.begin()+mid);
                    break;
                }
                else if(nums2[mid]<nums1[i])
                {

                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }
        }
        return v;
    }
};