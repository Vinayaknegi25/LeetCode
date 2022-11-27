class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        if(n<=0)
            return false;
        vector<int> v;
        int f=0 ;
        while(n>0)
        {
            if(n%2==0)
            {
                v.push_back(0);
            }
            else if(n%2==1 && f==0)
            {
                v.push_back(1);
                f=1;
            }
            else
            {
                return false;
            }
            n=n/2;
        }
        return true;      
    }
};
