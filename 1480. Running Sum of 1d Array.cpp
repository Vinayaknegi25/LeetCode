class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int adder=0;
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]+adder;
            adder=nums[i];
        }
        return nums;
        
    }
};
