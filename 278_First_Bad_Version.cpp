// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        int s=1,e=n;
        int mid = 1;
        while(s<=e)
        {
            mid =s+(e-s)/2;
            if(isBadVersion(mid) == false && isBadVersion(mid - 1) == true) return mid;
            if(isBadVersion(mid) == true && isBadVersion(mid - 1) == false) return mid;
            
            else if(!isBadVersion(mid))
            {
                s = mid +1;
            }
            else{
                e = mid - 1;
            }
        }
        return mid;
    }
};
