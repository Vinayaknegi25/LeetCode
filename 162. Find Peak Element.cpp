class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       int beg=0;
       int end=nums.size()-1;
       int mid=0;
       while(beg<end)
       {
            mid = (beg+end)/2;
            if(nums[mid]>nums[mid+1])
            {
                end=mid;
            }
            else
                beg=mid+1;
       }
       return beg;
    }
};
