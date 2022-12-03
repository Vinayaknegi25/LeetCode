class Solution {
public:
    bool isThree(int n) {
        int c=1;
        for(int i=1;i<n/2+1;i++)
        {
            if(c>3)
                return false;
            if(n%i==0)
                c++;
        }
        if(c==3)
            return true;
        return false;

    }
};
