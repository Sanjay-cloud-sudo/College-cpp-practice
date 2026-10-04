//Leap Year Using IF ELSE conditions
#include <iostream>
using namespace std;

int main() 
{
    int year;
    cout<<"Enter The Year"<<endl;
    cin>>year;
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                cout<<"It is a Leap Year"<<endl;
            }
            else
            {
                cout<<"It is not a Leap Year"<<endl;
            }
        }
        else
        {
        cout<<"It is Leap Year"<<endl;
        }
    }    
else
{
    cout<<"It is not a Leap Year"<<endl;
}

    return 0;
}