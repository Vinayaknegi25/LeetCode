class Solution {
public:
    void reverseString(vector<char>& s) {
        char c;
        int j=s.size()-1;
        for(int i=0;i<s.size()/2;i++)
        {
            c=s[i];
            s[i]=s[j];
            s[j]=c;
            j--;
        }
    }
};
