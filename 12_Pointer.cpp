#include<iostream>
using namespace std;
int main()
{   //********pointer*******
    // '*' ---> Derefrancing oprator
    int a=3;
    int * b=&a;
    b=&a;
    cout<<"a valu ="<<a<<endl;
    cout<<"b point to a then b valu ="<<*b<<endl;
    cout<<"b addres ="<<b<<endl;
    cout<<"a addres ="<<&a<<endl;

    //******pointer to pointer******
    int **c=&b;
    cout<<"c valu ="<<**c<<endl;
    cout<<"c point to b then b valu ="<<*b<<endl;
    cout<<"b addres ="<<b<<endl;
    cout<<"c addres ="<<c<<endl;
    cout<<"c addres ="<<&c<<endl;

    
    return 0;
}