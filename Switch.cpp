//SWITCH
#include <iostream>
using namespace std;

int main()
{
    int day;
    cout<<"Enter day Number (Example:1 for Monday) to see if Programming Class is Scheduled and its Time Slot."<<endl;
    cin>>day;
 switch (day)
 {
    case 1: cout<<"Monday is Holiday"<<endl;
    break;
    
    case 2: cout<<" Tuesday "<<endl;
            cout<<" Programming class= YES"<<endl;
            cout<<" Time Slot= 10:00-11:00"<<endl;
    break;
    
    case 3: cout<<" Wednesday "<<endl;
            cout<<" Programming class= YES"<<endl;
            cout<<" Time Slot= 3:00-4:00"<<endl;
    break;
    
    case 4: cout<<" Thursday "<<endl;
            cout<<" Programming class= NO"<<endl;
    break;
    
    case 5: cout<<" Friday "<<endl;
            cout<<" Programming class= YES"<<endl;
            cout<<" Time Slot= 11:00-1:00"<<endl;
    break;
    
    case 6: cout<<" Saturday "<<endl;
            cout<<" Programming class= YES"<<endl;
            cout<<" Time Slot= 12:00-1:00"<<endl;
    break;
    
    case 7: cout<<" Sunday is Holiday "<<endl;
    break;
    
    default: cout<<" Number is Invalid "<<endl;
}

return 0;
}