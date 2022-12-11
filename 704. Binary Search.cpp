class Solution {
public:
    int search(vector<int>& nums, int target) {
        int beg=0,end=nums.size();
        int mid=0;
        if(end==1)
        {
            if(nums[0]!= target)
                return -1;
        }
        while(beg<=end)
        {
            mid=beg+(end-beg)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                beg=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return -1;
        
    }
};
