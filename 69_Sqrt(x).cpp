class Solution {
public:
    int mySqrt(int end) 
    {
        long int y=0; 
        while(y*y <= end)
        {
            y++;
        }
        return y-1;
        /*
        a. 
          k = x/2 # initial value
          while (abs(k*k - x)>=0.1)    
            k = k  - (k*k - x)/(2 * k) #update ;
          return int(k) ;
        
        b.
        float beg=0,mid=0,z,t=1;
        if(end==1)
        {
            return end;
        }
        while(1)
        {
            mid=beg +(end-beg)/2;
            z=mid*mid;
            if(z == end  )
            {
                return (int)mid;
            }
            else if(z>end)
            {
                end=mid;
            }
            else
            {
                beg=mid ;
            }
        }
        */
        
    }
};
