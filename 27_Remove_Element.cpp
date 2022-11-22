class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int c=0;
        for(int i=0;i<size(nums);i++)
        {
            if(nums[i]==val)
            {
                nums[i]=99;
                c++;
            }
        }
        sort(nums.begin(),nums.end());
        int size=nums.size();
        return (size-c) ;
    }
};
