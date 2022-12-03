class Solution {
public:
    int smallestEvenMultiple(int n) 
    {
        for(int i=n;;i=i+n)
        {
            if(i%2==0)
                return i;
        }
        return n;
        
    }
};
