#include<iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
        void setdata(void){
            salary=233; 
            cout<<"Enter Employee Id =";
            cin>>id;
        }
        void getdata(void){
            cout<<"Employee id is  ="<<id<<endl;
        }
};
int main()
{
    // Employee vishal,suraj;
    // vishal.setdata();
    // vishal.getdata();
    Employee a[4];
    for(int i=0;i<4;i++){
        a[i].setdata();
        a[i].getdata();
    }
    return 0;
}