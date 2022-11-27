class Solution {
public:
    bool isPowerOfThree(int n) 
    {
        if(n<=0)
            return false;
        int c=0;
        long int a=3;
        while(a<2147483647)
        {
            a=a*3;
            c++;
        }
        int x= pow(3,c);
        if(x%n==0)
            return true;
        else
            return false;
        
    }
};
