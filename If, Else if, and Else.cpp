#include <iostream>
using namespace std;

int main()
{
    int day;
    cout<<"Enter day Number (Example:1 for Monday) to see if Programming Class is Scheduled and its Time Slot."<<endl;
    cin>>day;
    if(day==1)
    {
        cout<<"Monday is Holiday"<<endl;
    }
    else if(day==2)
    {
        cout<<" Tuesday "<<endl;
        cout<<" Programming class= YES"<<endl;
        cout<<" Time Slot= 10:00-11:00"<<endl;
    }
    else if(day==3)
    {
        cout<<" Wednesday "<<endl;
        cout<<" Programming class= YES"<<endl;
        cout<<" Time Slot= 3:00-4:00"<<endl;
    }
    else if(day==4)
    {
        cout<<" Thursday "<<endl;
        cout<<" Programming class= NO"<<endl;
    }
    else if(day==5)
    {
        cout<<" Friday "<<endl;
        cout<<" Programming class= YES"<<endl;
        cout<<" Time Slot= 11:00-1:00"<<endl;
    }
    else if(day==6)
    {
        cout<<" Saturday "<<endl;
        cout<<" Programming class= YES"<<endl;
        cout<<" Time Slot= 12:00-1:00"<<endl;
    }
    else if(day==7)
    {
        cout<<" Sunday is Holiday"<<endl;
    }
    else
    {
        cout<<" Invalid Number "<<endl;
    }
return 0;
}