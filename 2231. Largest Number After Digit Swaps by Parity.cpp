class Solution {
public:
    int largestInteger(int num) {
        vector<int> v;
        long long int temp=num;
        while(num)
        {
            v.push_back(num%10);
            num=num/10;
        }
        reverse(v.begin(),v.end());
        vector<int> even;
        vector<int> odd;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]%2==0)
                even.push_back(v[i]);
            else
                odd.push_back(v[i]);
        }
        sort(even.begin(),even.end(),greater<int>());
        sort(odd.begin(),odd.end(),greater<int>());
        int k=0,c=0;
        for(int i=0;i<v.size();i++){
            if(v[i]%2==0){
                v[i]=even[k++];
            }
            else{
                v[i]=odd[c++];
            }
        }
        temp=0;
        for(int i=0;i<v.size();i++){
            temp=temp+v[i];
            temp=temp*10;
        }
        return temp/10;
    }
};
