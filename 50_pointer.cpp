#include<iostream>
using namespace std;

int main()
{
    int a=20;
    int *b=&a;
    *b=435; 
    cout<<" The valu of a is "<<*b<<endl;
    //new oprator
    int *c= new int (39);
    cout<<" The new valu is "<<*c<<endl;

    int *arr= new int [3];
    arr[0]=1;
    arr[1]=2;
    // *(arr+1)=2;
    arr[2]=3;
   // delete [] arr;          //valu is garbej
    cout<<" The valu of arr[0] is "<< arr[0] <<endl; 
    cout<<" The valu of arr[1] is "<< arr[1] <<endl; 
    cout<<" The valu of arr[2] is "<< arr[2] <<endl; 

return 0;
}