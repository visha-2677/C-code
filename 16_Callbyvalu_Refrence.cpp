#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int c=a+b;
    return c;
}

int swap(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
    return 0;
}

int swappointer(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    return 0;
}

int swapRefrence(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
    return 0;
}

int main()
{
    int x=2,y=4;
    cout<<x<<endl;
    cout<<y<<endl;
    //swap(x,y);    // not swap number because copy of orignal valu
    //swappointer(&x,&y);  // yes swap number to use POINTER REFRENCE because cll by valu means addres of variabel to pointing valu
    swapRefrence(x,y);  // yes swap number to use REFRENCE VARIABLE
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<"The sum="<<sum(x,y);
    return 0;
}