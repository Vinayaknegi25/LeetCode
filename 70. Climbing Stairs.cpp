class Solution {
public:
    int climbStairs(int n) 
    {
        vector<int> v;
        if(n==3)return 3;
        if(n==2) return 2;
        if(n==1) return 1;
        long int a=1,b=0,c=0;
        for(int i=0;i<=n+1;i++)
        {
            v.push_back(c);  
            c=a+b; 
            a=b;  
            b=c;
           
        }
        return v[n+1];
    }
};
