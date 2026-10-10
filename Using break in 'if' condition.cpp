//Using break in 'if' Condition
#include <iostream>
using namespace std;
int main()
{
    int i;
    for(i=0; i<=10; i++)
    {
        if (i==5)
        break; // 5 ke pehele value value hi show honge 
        cout<<i<<endl;
    }
    return 0;
}