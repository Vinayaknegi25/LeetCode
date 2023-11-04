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
 // Using a Pair 

vector<pair<int,int>> numWithIndex;
        for( int i=0;i<nums.size();i++)
            numWithIndex.push_back({nums[i],i});
        int left = 0, right = nums.size() - 1;
        sort(numWithIndex.begin(),numWithIndex.end());
        while (left < right)
        {
            int sum=numWithIndex[left].first + numWithIndex[right].first;
            if( sum == target)
                return {numWithIndex[left].second, numWithIndex[right].second};
            else if (sum < target)
            {
                left++;
            }
            else 
            {
                right--;
            }
        }
        return{};
    }
