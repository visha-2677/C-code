#include<iostream>
using namespace std;
class base
{
    int data1;  //private and is not inheritable
    public:
        int data2;
        void setdata();
        int getdata1();
        int getdata2();
};
void base::setdata()
{
    data1 =21;
    data2 =32;
}
int base::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}
class dirived:public base
{
    int data3;
    public:
        void process();
        void display();
};
void dirived::process()
{
    setdata(); //only is in private invisiblit mode
    data3=data2 * getdata1();
}
void dirived::display()
{
    cout<<"The valu of data 1 = "<<getdata1()<<endl;
    cout<<"The valu of data 2 = "<<data2<<endl;
    cout<<"The valu of data 3 = "<<data3<<endl;
}
int main()
{
    dirived vishal,suraj,smit;
    vishal.setdata();
    vishal.process();
    vishal.display();
    
    return 0;
}