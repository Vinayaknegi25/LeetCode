class Solution {
public:
    vector<int> plusOne(vector<int>& v)
    {
        /*
        long int num=0;
        long int power=v.size()-1;
        for(int i=0;i<v.size();i++)
        {
            num=num+(v[i] * (pow(10,power)));
            power--;
        }
        num=num+1;
        int digit=0;
        v.clear();
        while(num!=0)
        {
            digit=num%10;
            v.push_back(digit);
            num=num/10;
        }
        reverse(v.begin(),v.end());
        return v;
        */
        for(int i=v.size()-1;i>=0;i--)
        {
            if(v[i]<9)
            {
                v[i]++;
                return v;
            }
            else
            {
                v[i]=0;
            }
        }
        v.push_back(0);
        v[0]=1;
        return v;
    }
};
