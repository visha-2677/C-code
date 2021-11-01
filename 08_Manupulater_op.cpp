#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    // const int a=23;
    // a=43;           // Error code constan
    // cout<<"The valu of a is 23";

    // ********manupulater*********
    int a=32,b=213,c=6545;
    cout<<"The valu of a="<<setw(4)<<a<<endl;
    cout<<"The valu of b="<<setw(4)<<b<<endl;
    cout<<"The valu of c="<<setw(4)<<c<<endl;

    // Operator Precedence
    // int a =3, b=4;
    // int c = (a*5)+b;
    // int c = ((((a*5)+b)-45)+87);
    // cout<<c;
    return 0;
}