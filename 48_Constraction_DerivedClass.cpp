#include<iostream>
using namespace std;
/*
case 1:
class B: public A{
    // order of Execution of constructor -> first A() then B()
};

case 2:
class A: public B , public C{
    // order of Execution of constructor -> B() then C() then A()
};

case 3:
class A: public B ,vritual public C{
    // order of Execution of condtructor -> C() then B() then A()
}; 
*/
class Base {
    int data;
    public:
        Base(int i){
            data = i;
            cout<<"Base class constructor called"<<endl;
        }
        void printData(){
            cout<<"The valu of data is "<<data<<endl;
        }

};
int main()
{
    
}