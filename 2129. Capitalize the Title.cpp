class Solution {
public:
    string capitalizeTitle(string s1) 
    {
        for(int i=0,j=0;i<=s1.size();++i)
        {
            if(i==s1.size()|| s1[i]==' ' )
            {
                if(i - j >2)
                {
                    s1[j]=toupper(s1[j]);
                }
                j=i+1;  
            }
            else
            {
                s1[i]=tolower(s1[i]);
            }
        }
        return s1;
    } 

};
