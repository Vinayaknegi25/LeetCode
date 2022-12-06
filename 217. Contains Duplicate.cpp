class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_map<int,int> m;
        for(auto itr:nums)
            m[itr]++;
        vector<pair<int,int>> v;
        for(auto itr:m)
            v.push_back({itr.first,itr.second});
        
        for(auto itr:v)
        {
            if(itr.second != 1)
                return true;
        }
        return false;

    }
};
