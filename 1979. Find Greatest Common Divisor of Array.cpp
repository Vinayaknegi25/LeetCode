class Solution {
public:
    int findGCD(vector<int>& nums) 
    {
        int gcd=0;
        int minelem=*min_element(nums.begin(),nums.end());
        int maxelem= *max_element(nums.begin(),nums.end());
        if(minelem==maxelem)
            return minelem;
        for(int i=1;i<maxelem;i++)
        {
            if(minelem%i==0 && maxelem%i==0)
                gcd=i;
        }
        return gcd;
        
    }
};
