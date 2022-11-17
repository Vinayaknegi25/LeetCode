class Solution {
public:
    int reverse(int x) 
    {
        int val,f=0;
        int copy,digit=0,rev=0 ;
        if(x==0 || x == -2147483648)
            return 0;
        if(x<0)
        {
            val=x * -1 ;   //getting a positive number
            copy=val;
            while (copy !=0)
            {
                if( rev>(INT_MAX/10) || rev>( (INT_MAX/10)+copy%10) )
                return 0;
                digit= copy%10;
                rev=rev*10+digit;
                copy=copy/10;
            }
            rev= rev * -1;
            return rev;
        }
        else
        {
            copy=x;
            while (copy !=0)
            {
                if( rev>(INT_MAX/10) || rev>( (INT_MAX/10)+copy%10) )
                return 0;
                digit= copy%10;
                rev=rev*10+digit;
                copy=copy/10;
            }
            if(rev <= 2147483648 )
                return rev;
            else
                return 0;
        }
    }
};
