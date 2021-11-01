#include<iostream>
using namespace std;
int fibonachi(int n)
{
    if(n<=1)
    {
        return 1;                             //Recursion means function call to function
    }
    return fibonachi(n-1)+fibonachi(n-2);      
}
int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int a;
    cout<<"Enter factorial number=";
    cin>>a;
    cout<<"The valu of "<<a<<"  factorial is  "<<factorial(a);

    // int a;
    // cout<<"Enter fibonachi number=";
    // cin>>a;
    // cout<<"The valu of "<<a<<"  fibonachi is  "<<fibonachi(a);
    return 0;
}