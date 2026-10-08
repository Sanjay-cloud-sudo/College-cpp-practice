// Table using do
#include <iostream>
using namespace std;

int main()
{
    int i;
    int number=1;
    cout<<"Enter Number To Show The Table Of That Number"<<endl;
    cin>>i;
    do
    {
        cout<<i<< "*"<< number << " = " <<i*number<<endl;
        number++;
    }
    while(number<=10);
    cout<<" End Of Program "<<endl;

    return 0;
}