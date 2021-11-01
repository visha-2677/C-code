#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"The valu of a=";
    cin>>a;
    cout<<"The valu of b=";
    cin>>b;
    cout<<"The valu a+b="<<a+b<<endl;
    cout<<"The valu a-b="<<a-b<<endl;
    cout<<"The valu a*b="<<a*b<<endl;
    cout<<"The valu a/b="<<a/b<<endl;
    cout<<"The valu a%b="<<a%b<<endl;
    cout<<"The valu a++="<<a++<<endl;
    cout<<"The valu a--="<<a--<<endl;
    cout<<"The valu ++a="<<++a<<endl;
    cout<<"The valu --a="<<--a<<endl;


        // Comparison operators
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl; 

    // Logical operators
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl; 
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl; 
    cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl; 

    return 0;
}
