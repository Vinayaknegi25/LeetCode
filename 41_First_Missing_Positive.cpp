class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        set<int> s (nums.begin(),nums.end());
        int i=1;
        while(i)
        {
            if(! s.count(i))
                return i;
            i++;
        }
        return i-1;
    }
};
