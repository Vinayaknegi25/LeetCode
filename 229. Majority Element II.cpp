class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(auto itr: nums)
            mp[itr]++;
        int n=nums.size();
        vector<int> result ;
        for(auto itr: mp)
        {
            if(itr.second>n/3)
                result.push_back(itr.first);
        }
        return result;
    }
};
