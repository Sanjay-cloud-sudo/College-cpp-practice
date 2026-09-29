#include <iostream>
using namespace std;
int add(int a, int b, int c)
{
   int result=a+b+c;
   return result;
}
int main()
{
    int x=10;
    int y=20;
    int z=30;
    cout<<add(x,y,z);
    
    

    return 0;
}