// Table using While
#include <iostream>
using namespace std;

int main()
{
    int i;
    int number=1;
    cout<<"Enter Number To Show The Table Of That Number"<<endl;
    cin>>i;
    while(number<=10) // Local main me defined hai
    {
        cout<<i<< "*"<< number << " = " <<i*number<<endl;
        number++;
    }
    cout<<" End Of Program "<<endl;

    return 0;
}