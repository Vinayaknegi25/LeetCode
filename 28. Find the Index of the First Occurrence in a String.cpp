class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=0,k=0;
        int Hl=haystack.length();
        int Nl=needle.length();
        while(k<=(Hl-Nl))
        {
            if(haystack[i]==needle[j])
            {
                i++;j++;
                if(j==Nl)
                    return k;
            }
            else
            {
                j=0;
                k++;
                i=k;
            }
        }
        return -1;
    }

};
