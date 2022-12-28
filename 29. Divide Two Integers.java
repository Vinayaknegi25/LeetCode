import java.math.*;
class Solution {
    public int divide(int dividend, int divisor) {
        if(divisor==-1 && dividend==-2147483648)
            return ((dividend*-1)-1);
        String dividnd;
        String divisr;
        dividnd=String.valueOf(dividend);
        divisr=String.valueOf(divisor);
        BigInteger b=new BigInteger(dividnd);
        BigInteger c=new BigInteger(divisr);
        BigInteger a= b.divide(c);
        dividend=a.intValue();
        return dividend;
    }
}
