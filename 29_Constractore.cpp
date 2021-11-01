#include<iostream>
using namespace std;
class Complex 
{
    int a,b;
    public:
        Complex(void);
        void setdata(int a1,int b1){
            a=a1;
            b=b1;
        }
        void setdata(void){
            cout<<"valu of "<<a<<" + "<<b<<"i"<<endl;
        }
};
Complex :: Complex (void){
    a=12;
    b=81;
}
int main()
{
    Complex c1,c2;
    c1.setdata();
    c1.setdata();
    return 0; 
}