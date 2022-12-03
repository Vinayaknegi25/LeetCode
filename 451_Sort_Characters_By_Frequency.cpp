class Solution {
public:
    string frequencySort(string s) 
    {
        string final;
        unordered_map <char,int> m;
        for(auto itr:s)
            m[itr]++;
        vector<pair<int,char>> v;
        for(auto itr:m)
        {
            v.push_back({itr.second,itr.first});
        }
        sort(v.begin(),v.end());
        for(auto itr:v)
        {
            while(itr.first !=0)
            {
                final.push_back(itr.second);
                itr.first--;
            }
        }
        reverse(final.begin(),final.end());
        return final;
        
    }
};
