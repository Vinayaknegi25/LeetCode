class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int length=s.length();
        int flag=0;
        string ans="";
        for(int i=length-1;i>=0;i--)
        {
            if(s[i]==' ' && flag==1)
                return ans.length();
            else if(s[i]!=' ')
            {
                ans+=s[i];
                flag=1;
            }
        }
        return ans.length();
    }
};
