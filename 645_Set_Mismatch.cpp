class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        int n=nums.size();
        int sum=n*(n+1)/2 ; //sum of natural numbers
        int s=0;
        for(int i=0;i<n;i++)
        {
            s=s+nums[i]; //initial sum
        }
        set<int> se ;
        for(int i=0;i<n;i++) //unique numbers
            se.insert(nums[i]);
        int set_sum=accumulate(se.begin(),se.end(),0);
        
        int missing_num= sum-set_sum;
        int copy_num=s-set_sum;
        return {copy_num,missing_num};        
    }
};
