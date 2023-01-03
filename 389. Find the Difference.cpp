class Solution {
public:
    char findTheDifference(string s, string t)
    {
        int size=s.size();
        if(size==0)
        {
            return t[0];
        }
        string strs;
        string strt;
        for(int i=0;s[i]!='\0';i++)
        {
            strs.push_back(s[i]);
            strt.push_back(t[i]);
        }
        strt.push_back(t[size]);
        sort(strs.begin(),strs.end());
        sort(strt.begin(),strt.end());
        cout<<strt;
        cout<<strs;
        for(int i=0;i<size;i++)
        {
            if(strs[i]!=strt[i])
                return strt[i];
        }
        return strt[size];
    }
};
