#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
        void setdata(int a1,int b1)
        {
            a=a1;
            b=b1;
        }
        void getdata()
        {
            cout<<"your complex is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main()
{
    Complex vishal;
    vishal.setdata(1,2);
    vishal.getdata();
    return 0;
}