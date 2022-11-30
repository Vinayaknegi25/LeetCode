class Solution {
public:
    bool judgeCircle(string s) 
    {
        map<string,int> m;
        int len=s.length();
        int u,d,l,r;
        u=d=l=r=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='U')
                u++;
            if(s[i]=='D')
                d++;
            if(s[i]=='L')
                l++;
            if(s[i]=='R')
                r++;
        }
        m.insert(pair<string,int>("U",u));
        m.insert(pair<string,int>("D",d));
        m.insert(pair<string,int>("L",l));
        m.insert(pair<string,int>("R",r));
        if(m.at("U")-m.at("D") != 0 || m.at("L")-m.at("R") !=0)
            return false;
        else
            return true;
    }
};
