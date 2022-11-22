   class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
       int x=1;
        if(nums.size()==0)
            return 0;
        for(int i=1;i<size(nums);i++)
        {
            if(nums[i-1]!=nums[i])
            {
                nums[x]=nums[i];
                x++;
            }
        }
        return x;
        
    }
};
