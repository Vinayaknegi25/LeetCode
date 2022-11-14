class Solution {
public:
    bool isPerfectSquare(int num) 
    { 
        if(num==1)
        {
            return true;
        }
        int beg=0;
        long mid;
        int end=num;
        while(beg <= end)
        {
            mid=beg + (end-beg)/2;
            if(mid*mid == num)
                return true;
            else if ((mid*mid)<num)
                beg=(int)mid+1;
            else
                end=(int)mid-1;
        }
        return false;
    }
};
