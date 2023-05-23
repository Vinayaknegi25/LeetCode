// Brute Force
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a,b;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    a=i;
                    b=j;
                }
            }
        }
        return {a,b};
    }
};

// Optimised Aproach
class Solution{
    public:
    vector<int> twoSum(vector<int>& nums, int target){
        map<int,int> map;
        for(int i=0;i<nums.size();i++)
        {
            if(map.find(target-nums[i])!=map.end())
            {
                return {map[targrt-nums[i],i};
            }
            map[nums[i]]=i;
        }
        return {};
    }
}
