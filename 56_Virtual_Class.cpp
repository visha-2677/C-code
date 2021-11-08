#include<iostream>
using namespace std;
class Base
{
    public:
    int base=1;
    virtual void display()
    {
        cout<<"1 the valu of base is "<<base<<endl;
    }
};
class Dirived:public Base
{
    public:
    int Dirived=2;
    void display()
    {
        cout<<"2 the valu of base is "<<base<<endl;
        cout<<"2 the valu of Dirived is "<<Dirived<<endl;
    }
};
int main()
{
    // Dirived *Base_pointer; //same output becuse of virtual class
    Base *Base_pointer;   //same output becuse of virtual class
    Base obj_base;
    Dirived obj_dirived;
    Base_pointer=&obj_dirived;//dicied output pointing to addres of oprator beacuse of virtual class
    Base_pointer=&obj_base;//dicied output pointing to addres of oprator beacuse of virtual class
    Base_pointer->display();
    return 0;
}