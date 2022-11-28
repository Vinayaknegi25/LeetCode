class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int zero=count(nums.begin(),nums.end(),0);
        int one=count(nums.begin(),nums.end(),1);
        int two=count(nums.begin(),nums.end(),2);
        int i=0;
        for(i=0;i<zero;i++)
            nums[i]=0;
        for(i=zero;i<(zero+one);i++)
            nums[i]=1;
        for(i=(zero+one);i<(zero+one+two);i++)
            nums[i]=2;
        
    }
};
