//While
#include <iostream>
using namespace std;

int main()
{
    int i, ending;
    cout<<"Enter First Number"<<endl;
    cin>>i;
    cout<<"Enter Second Number"<<endl;
    cin>>ending;
    while(i<=ending) // Local main me defined hai
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
    cout<<" End Of Program "<<endl;

    return 0;
}