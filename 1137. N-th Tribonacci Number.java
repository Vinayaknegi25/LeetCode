class Solution {
    public int tribonacci(int n) 
    {
        if(n==0) return 0;
        int a,b,c,d;
        a=0;
        b=1;
        c=1;
        while(n>2)
        {
            d=a+b+c;
            a=b;
            b=c;
            c=d;
            n--;
        }
        return c;
    }
}
