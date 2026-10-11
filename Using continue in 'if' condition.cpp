//Using continue in 'if' Condition
#include <iostream>
using namespace std;
int main()
{
    int i;
    for(i=0; i<=7; i++)
    {
        if (i==3)
        continue; // 3 value hi show 'nahi' hogi
        cout<<i<<endl;
    }
    return 0;
}