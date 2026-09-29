//AREA OF CIRCLE
#include <iostream>
using namespace std;

int main() 
{
    double radius;
    const double pi=3.14;
    cout<<"Enter Radius Of Circle" <<endl;
    cin>>radius;
    double area=pi*(radius*radius);
    cout<<"Area Of Circle is "<<area<<endl;
    return 0;
}