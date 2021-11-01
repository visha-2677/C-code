#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;                 
}
int sum(int a,int b,int c)
{
    return a+b+c;
}
int main()
{
    int x=1,y=2,z=3;
    cout<<"The sum="<<sum(x,y)<<endl;   //same function use to many extra variable
    cout<<"The sum="<<sum(x,y,z)<<endl; //means Function Overloding
    
    return 0;

}