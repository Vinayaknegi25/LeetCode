class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        vector<int> v(50,0);
        for(int i=0;i<accounts.size();i++)
        {
            for(int j=0;j<accounts[i].size();j++)
            {
                v[i]=v[i]+accounts[i][j];
            }
        }
        return *max_element(v.begin(),v.end());
        
    }
};
