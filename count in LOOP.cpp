// count in LOOP 
#include <iostream>
using namespace std;
int main()
{
    int count=0;
    for(int i; count<=10; i=i/10)
    {
    if(i%2==0)
    cout<<i<<" Even Number "<<endl;
    else
    {
        cout<<i<<" Odd Number "<<endl;
    }
    count++;
    }
    cout<<"End Of Program"<<endl;

    return 0;
}