#include<iostream>
using namespace std;
// Forword Declaration
class Complex;
class calculater
{
    public:
      
        int sumRealcomplex(Complex ,Complex );
        int sumCompcomplex(Complex ,Complex );
};

class Complex
{
    int a,b;
    // Individully declaring Function as Friend 
    friend int calculater :: sumRealcomplex(Complex o1,Complex o2);
    friend int calculater :: sumCompcomplex(Complex o1,Complex o2);

    // // Decalring the all calculater function as friend
    // friend class calculater;
    public:
        void setdata(int v1,int v2)
        {
            a=v1;
            b=v2;
        }
        void Displaydata()
        {
            cout<<"Your number is  "<<a<<"  +  "<<b<<"i"<<endl;
        }
};

// declaration
int calculater :: sumRealcomplex(Complex o1,Complex o2){
            return (o1.a +o2.a);
        }
int calculater :: sumCompcomplex(Complex o1,Complex o2){
            return (o1.b +o2.b);
        }        

int main()
{   Complex c1,c2;
    c1.setdata(2,3);
    c1.Displaydata();
    c2.setdata(4,2);
    c2.Displaydata();

    calculater calc;
    int res = calc.sumRealcomplex(c1, c2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumCompcomplex(c1,c2);
    cout << "The sum of comp part of o1 and o2 is " << resc << endl;

    return 0;
}