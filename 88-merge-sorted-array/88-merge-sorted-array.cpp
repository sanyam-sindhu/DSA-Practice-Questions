class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=n-1;
        int j=m-1;
        int count=m+n-1;
        while(i>=0 && j>=0)
        {
            if(nums2[i]>nums1[j])
            {
                nums1[count]=nums2[i];
                i--;
            }
            else
            {
                nums1[count]=nums1[j];
                j--;
            }
            count--;
        }
        while (i >= 0)
        {
            nums1[count--] = nums2[i--];
        }
        
    }
};