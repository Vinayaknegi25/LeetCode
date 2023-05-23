class Solution {
public:
    int dayOfYear(string date) {
        pair<char,char> Month;
        Month.first=date[5];
        Month.second=date[6];

        pair<char,char> Day;
        Day.first=date[8];
        Day.second=date[9];

        pair<pair<char,char>,pair<char,char>> Year;
        Year.first={date[0],date[1]};
        Year.second={date[2],date[3]};

        int mnt= 10*(int(Month.first)-48) + int(Month.second)-48;
        int dy = 10*(int(Day.first)-48) + int(Day.second)-48;
        int yr = 1000*(int(Year.first.first)-48) + 100*(int(Year.first.second)-48) + 10*(int(Year.second.first)-48) + int(Year.second.second)-48;

        cout<<"Month is: "<<mnt<<endl;
        cout<<"Day is: "<<dy<<endl;
        cout<<"Year is: "<<yr<<endl;
        int a[12]={31,0,31,30,31,30,31,31,30,31,30,31} ;

        if(yr % 4 !=0)
            a[1]=28;
        else if(yr%100 !=0)
            a[1]=29;
        else if(yr%400 !=0)
            a[1]=28;
        else
            a[1]=29;
        
        int result=0;
        // if(mnt==1)
        //     return dy;

        for(int i=0;i<mnt-1;i++)
        {
            result+=a[i];
        }
        return result+dy;
    }
};
