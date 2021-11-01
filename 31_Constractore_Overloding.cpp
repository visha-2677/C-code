#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
        Complex(int x,int y){
            a=x;
            b=y;
        }
        Complex(int x){
            a=x;
            b=23;
        }
        Complex(){
            a=45;
            b=63;
        }
        void display(){
            cout<<"The valu of "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main()
{
    // Complex c1;     // a=45 and b=63 print 
    // Complex c1(1);  // a=1  and  b=63 print
    Complex c1(1,2);
    c1.display();            

    Complex c2(3);      //Constractor overloding
    c2.display();

    Complex c3;
    c3.display();
    
    return 0;
}