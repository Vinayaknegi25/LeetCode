class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        if(nums.size()==1)
            return nums[0];
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==nums[i+1])
                return nums[i];
        }
        return nums[nums.size()];
    }
};
