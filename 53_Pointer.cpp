#include<iostream>
using namespace std;
class A
{
    int a;
    public:
        // A & setdata(int a){
        void setdata(int a){        //void setdata(int b){
            this->a=a;              // a=b;
            // return *this;        //}
        }

        void getdata()
        {
            cout<<"The valu of a is "<<a;
        }
};
int main()
{
    A a;
    a.setdata(4);
    // a.setdata(4).getdata();
    a.getdata();
    return 0;
}
