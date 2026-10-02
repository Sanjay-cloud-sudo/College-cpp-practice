#include <iostream>
#include <string>
using namespace std;

int main()
{
    string day;
    cout<<"Enter day (Example:Monday) to see if Programming class is scheduled and its Time Slot."<<endl;
    cin>>day;
    if(day=="Monday")
    {
        cout<< day <<" is Holiday"<<endl;
    }
    else if(day=="Tuesday")
    {
        cout<< " Programming class: YES"<<endl;
        cout<<" Time Slot: 10:00-11:00"<<endl;
    }
    else if(day=="Wednesday")
    {
        cout<< " Programming class: YES"<<endl;
        cout<<" Time Slot: 3:00-4:00"<<endl;
    }
    else if(day=="Thursday")
    {
        cout<< " Programming class: NO"<<endl;
    }
    else if(day=="Friday")
    {
        cout<< " Programming class: YES"<<endl;
        cout<<" Time Slot: 11:00-1:00"<<endl;
    }
    else if(day=="Saturday")
    {
        cout<< " Programming class: YES"<<endl;
        cout<<" Time Slot: 12:00-1:00"<<endl;
    }
    else if(day=="Sunday")
    {
        cout<< day <<" is Holiday"<<endl;
    }
    else
    {
        cout<< day <<" is invalid"<<endl;
    }
return 0;
}