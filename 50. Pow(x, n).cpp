class Solution {
public:
    double myPow(double x, int w) {
        long int n= w; 
        bool flag=0;
        double res=1.0;
        if(n==1)
            return x;
        if(n == 0)
            return 1;
        if(n<0)
        {
            n = n*(-1);
            flag=1;
        }
        else
        {
            flag= 0;
        }
        
        while(n>0)
        {
             if (n%2==0){  
                x=x*x;
                n = n/2;      
            }
            else{
                res = res*x;
                n = n-1;
            }             
        }
        if(flag==1){
            res=1.0/res;
        }    
        return res;
    } 

};
