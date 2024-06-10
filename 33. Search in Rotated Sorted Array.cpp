class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size=nums.size()-1;
        int pivot=0;
        int i=0;
        while(nums[size+i]<nums[0])
        {
            i--;
        }
        pivot=size+i+1;
        int low=0,high=size;
        if(nums[0]>target)
        {
            for(int i=pivot;i<size+1;i++)
            {
                if(nums[i]==target)
                    return i;
            }
        }
        else
        {
            for(int i=0;i<pivot;i++)
            {
                if(nums[i]==target)
                    return i;
            }
        }
        return -1;
    }
};
