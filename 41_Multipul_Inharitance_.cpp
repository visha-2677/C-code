#include<iostream>
using namespace std;
// Syntex for inheriting in multiple inherince
// class DerivedC : visiblity-mode base1,visiblity-mode base2
// {
    // Class Body of class "DerivedC"
// }
class Base1
{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int=a;
        }
};
class Base2
{
    protected:
        int base2int;
    public:
        int set_base2int(int a){
            base2int=a;
        }
};
class Derived:public Base1,public Base2
{
    public:
    void show(){
        cout<<"the valu of base1 is = "<<base1int<<endl;
        cout<<"the valu of base2 is = "<<base2int<<endl;
        cout<<"the valu of base1 + base2  is = "<<base1int+base2int<<endl;
    }
};
/*
The inherited Derived class will look somthing like this:
Data member:
    1.base1int --> protected               A(Base1)       B(Base2)
    2.base2int --> protected                  |              |
member Function: 
    1.set_data1int(); --> public              *              *
    2.set_data2int(); --> public              ----------------
    3.show(); --> public                              |
                                                      *
                                                  C(Derived)
*/
int main()
{
    Derived vishal;
    vishal.set_base1int(23);
    vishal.set_base2int(7);
    vishal.show();
    return 0;

}