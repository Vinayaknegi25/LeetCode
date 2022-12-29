class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) 
    {
        map<int,int> m;
        for(auto itr:nums)
            m[itr]++;
        map<int,vector<int>> v;
        for(auto itr: m)
            v[itr.second].push_back(itr.first);
        for(auto itr:v)
            sort(v[itr.first].begin(),v[itr.first].end(),greater<int>());
        vector<int> result;
        for(auto itr:v)
        {
            for(int j=0;j<itr.second.size();j++)
            {
                for(int i=0;i<itr.first;i++)
                {
                    result.push_back(itr.second[j]);
                }
            }
        }
        return result;
    }
};
