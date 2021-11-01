#include<iostream>
using namespace std;
int glo=32;  //gloable variable
int sum()
{
    int a;
    cout<<"\ngloa="<<glo;
    return 0;
}
int main()
{
    int a=32,b=329;
    float pi=3.14;
    char c='v';
    int glo=43;   //local variable
    glo=12;
    bool t=true;
    t=false;
    cout<<"The valu a="<<a<<endl<<"The valu b="<<b;
    cout<<"\nThe valu pi="<<pi;
    cout<<"\nThe charecter c="<<c;
    cout<<"\nThe gloa valu="<<glo;
    cout<<"\n The bool t="<<t;
   // sum();

    return 0;
    
}
