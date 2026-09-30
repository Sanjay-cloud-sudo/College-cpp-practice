// PERIMETER OF RECTANGLE
#include <iostream>
using namespace std;
int main()
{
    float length,breadth;                            
    cout<<"Enter length of Rectangle "<<endl;
    cin>> length;
    cout<<"Enter Breadth of Rectangle"<<endl;
    cin>>breadth;
    float area= 2*(length+breadth);
    cout<<"Perimeter of rectangle is " <<area;
    return 0;
}