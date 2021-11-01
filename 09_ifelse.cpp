#include<iostream>
using namespace std;
int main()
{
    // int age;
    // cout<<"Enter your age=";
    // cin>>age;
    // if(age>=18)
    // {
    //     cout<<"To Liesens applay";
    // }
    // else if((age<18) && (age>0))
    // {
    //     cout<<"To not applay Liesens";

    // }

    int age;
    cout<<"Enter your age=";
    cin>>age;
    switch (age)
    {
    case 1:
        cout<<"your age is 1";
        break;
    case 2:
        cout<<"your age is 2";
    
    default:
        break;
    }
    return 0;
}