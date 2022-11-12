class Solution {
public:
    string addBinary(string a, string b) 
    {
        /*int la=a.length()-1;
        int lb=b.length()-1;
        int x=0;
        int carry=0;
        vector <string> ans;
        if(la<lb?x=la:x=lb)
        while(x!=0)
        {
            if(a[la]==b[la])
            {
                if(a[la]==0 && carry== 0 )
                    ans.push_back("0");
                else if(carry == 1 && a[la] == "1")
                {
                    ans.push_back("1");
                    carry=1;
                }
                else
                {
                    
                }
            }
            else
            {
                if(carry==0)
                    ans.push_back("1");
                else
                {
                    ans.push_back("0");
                    carry-1;
                }
            }
            la--;
            lb--;
            x--;
        }
        return reverse(ans.begin(),ans.end()); 
        string ans;
        long int num1,num2;
        num1=stoi(a,0,2);
        num2=stoi(b,0,2);
        num1=num1+num2;
        if(num1==0)
            return "0";
        while (num1 >0)
        {
            if(num1%2==0)
            {
                ans.push_back('0');
            }
            else
            {
                ans.push_back('1');
            }
            num1=num1 / 2 ;
        }
        reverse(ans.begin(),ans.end());
        return ans;
        */
        int i = a.length()-1;
        int j = b.length()-1;
        string ans;
        int carry = 0;
        
        while(i>=0 || j>=0 || carry){
            if(i>=0){
                carry += a[i] - '0';
                i--;
            }
            if(j>=0){
                carry += b[j] - '0';
                j--;
            }
            
            ans += (carry%2 + '0');
            carry = carry/2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
