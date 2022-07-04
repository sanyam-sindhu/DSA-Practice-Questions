class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        int n=nums1.size();
        int m=nums2.size();
        vector<int> v;
        while(i<n && j<m)
        {
            if(nums1[i]<nums2[j])
            {
                v.push_back(nums1[i]);
                i++;
            }
            else
            {
                v.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n)
        {
            v.push_back(nums1[i]);
            i++;
        }
        while(j<m)
        {
            v.push_back(nums2[j]);
            j++;
        }
        int x=v.size();
        x=x/2;
        if(v.size()%2==0)
        {
            return (double)(v[x-1]+v[x])/2;
        }
        else
        {
            return v[x];
        }
        
    }
};