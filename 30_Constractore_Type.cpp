#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
     Complex (int,int);
        void setdata(void){
            cout<<"valu of "<<a<<"  +  "<<b<<"i"<<endl;
        }
};
Complex :: Complex(int x,int y){  // ---> This is defult Constractore as it accepts 2 paramiters 
    a=x;
    b=y;
}
int main()
{
    // Implicit call
    Complex a(2,3);
    a.setdata();

    // Explicit call
    Complex b=Complex (4,5);
    b.setdata();
    return 0;
}