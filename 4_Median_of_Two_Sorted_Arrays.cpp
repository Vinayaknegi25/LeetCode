class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int n=nums2.size();
        for(int i=0;i<n;i++)
            nums1.push_back(nums2[i]);
        sort(nums1.begin(),nums1.end());
        n=nums1.size();
        if(n%2==0)
        {
            return ((nums1[(n/2)-1]+nums1[(n/2)])/2.00) ;
        }
        else
            return nums1[n/2];
    }
};
