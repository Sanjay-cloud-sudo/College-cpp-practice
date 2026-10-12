//Using Global Variables
#include <iostream>
using namespace std;

int i;           //Global variable 
int ending;     //Global variable
int x=13;      //Global variable
float y=22.7; //Global variable
int main()
{
    cout<<"Enter First Number"<<endl;
    cin>>i;
    cout<<"Enter Second Number"<<endl;
    cin>>ending;
    while(i<=ending) // Local variable
    {
        if(i%2==0)
        {
        cout<<i<< " Even Number"<<endl;
        }
        else
        {
        cout<<i<<" Odd Number"<<endl;
        }
        i++;
    }
    cout<<"Global variable x: ";
    cout<<x<<endl;
    cout<<"Global variable y: ";
    cout<<y<<endl;
    cout<<"Global variable x*y: ";
    cout<<x*y<<endl;

    return 0;
}