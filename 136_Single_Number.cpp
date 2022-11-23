class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int size=nums.size();
        if(size==1)
            return nums[0];
        sort(nums.begin(),nums.end());`
        for(int i=1;i<size;i=i+2)
        {
            if(nums[i]!=nums[i-1])
                return nums[i-1];
        }
        return nums[size-1];
    }
};
