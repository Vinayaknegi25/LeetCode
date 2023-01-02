class Solution {
public:
    bool detectCapitalUse(string word) {
        int len=word.length();
        int capital=0,small=0;
        for(int i=0;i<len;i++)
        {
            if(!islower(word[i]))
                capital++;
            else
                small++;
        }
        if(capital==len) //if number of capital is equal to size  eg USA(3=3)
            return true;
        if(small==len) //if all are small eg leet {4=4}
            return true;
        if(isupper(word[0])&&small==len-1)//if first is cap and remaining are small eg Flag(1C 3small)
            return true;
        return false;
    }
};
