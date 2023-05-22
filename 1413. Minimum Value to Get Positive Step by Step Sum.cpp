class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int min=0;
        for(int i=1;i<nums.size();i++)
        {
            nums[i]=nums[i]+nums[i-1];
        }
        min= *min_element(nums.begin(),nums.end());
        if(min<0)
            return abs(min)+1;
        else
            return 1;
    }
};
