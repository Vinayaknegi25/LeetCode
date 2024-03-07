class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1;
        int sum=0;
        int a=n;
        int d=0;
        while(a!=0)
        {
            d=a%10;
            sum=sum+d;
            product=product*d;
            a=a/10;
        }
        return product-sum;
    }
};
