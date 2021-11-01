#include<iostream>
using namespace std;
// int sum(int,int);
// int sum(int x,int y);

void g(){
    cout<<"\nTime is Money";
}
int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int a,b,s;
    cout<<"The valu of a=";
    cin>>a;
    cout<<"The valu of b=";
    cin>>b;
    s=sum(a,b);
    cout<<"The sum c="<<s;
    g();
    return 0;
}