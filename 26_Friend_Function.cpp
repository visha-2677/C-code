#include<iostream>
using namespace std;
class Complex
{
    int a,b;
        friend Complex sumByComplex(Complex o1,Complex o2);     // Not class part only Excces data 
    public:
        void setdata(int v1,int v2)
        {
            a=v1;
            b=v2;
        }

        void Displaydata()
        {
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
    
};
Complex sumByComplex(Complex o1,Complex o2)
{
    Complex o3;
    o3.setdata( (o1.a + o2.a) , (o1.b + o2.b) );
    return o3;
}
int main()
{
    Complex c1,c2,sum;
    c1.setdata(1,2);
    c1.Displaydata();

    c2.setdata(1,3);
    c2.Displaydata();
    
    sum=sumByComplex(c1,c2);
    sum.Displaydata();

    return 0;
}
/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/