class Solution {
    public boolean halvesAreAlike(String s) 
    {
        int len=s.length();
        s=s.toLowerCase();
        char arr[]=s.toCharArray();
        int fc=0,sc=0;
        for(int i=0; i<len/2;i++)
        {
            if(arr[i] == 'a'|| arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' )
                fc++;
        }
         for(int i=len/2;i<len;i++)
        {
            if(arr[i] == 'a'|| arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' )
                sc++;
        }
        if(fc==sc)
            return true;
        else
            return false;
        
    }
}
