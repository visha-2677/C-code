#include<iostream>
using namespace std;
class Complex
{
    int real,imaginary;
    public:
        void setdata(int a,int b)
        {
            real=a;
            imaginary=b;
        }
        void getdata()
        {
            cout<<"real part is "<<real<<endl;
            cout<<"emaginary part is "<<imaginary<<endl;
        }
};
int main()
{
    // Complex c1;
    // Complex *ptr=&c1;
    Complex *ptr = new Complex;
    // c1.setdata(1,3);
    // c1.getdata();

    // (*ptr).setdata(1,3);
    // Aerrow Oprator
    ptr->setdata(1,3);
    
    // (*ptr).getdata();
    // Aerrow Oprator
    ptr->getdata();

    Complex *ptr1 = new Complex[4];
    ptr1->setdata(1,3);
    ptr1->getdata();


return 0;

}