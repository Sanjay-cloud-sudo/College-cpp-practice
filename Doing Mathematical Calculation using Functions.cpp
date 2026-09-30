// Doing Mathematical Calculation using Global Variables
#include <iostream>
using namespace std;
float A,B,C,D,E,F;
float add(float A,float B)
{
    float result=A+B;
    return result;
}

float sub(float C,float D)
{   
    float result=C-D;
    return result;
}

float mult(float E,float F)
{
    float result=E*F;
    return result;
}

int main()
{
    cout<<"Enter A = ";
    cin>>A;
    cout<<"Enter B = ";
    cin>>B;
    cout<<"Addition: "<<A<<"+"<<B<<"="<<add(A,B)<<endl<<endl;
    
    cout<<"Enter C = ";
    cin>>C;
    cout<<"Enter D = ";
    cin>>D;
    cout<<"Subtraction: "<<C<<"-"<<D<<"="<<sub(C,D)<<endl<<endl;
    
    cout<<"Enter E = ";
    cin>>E;
    cout<<"Enter F = ";
    cin>>F;
    cout<<"Multiplication: "<<E<<"*"<<F<<"="<<mult(E,F)<<endl;
    return 0;
}