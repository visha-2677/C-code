#include<iostream>
using namespace std;

template<class T1,class T2>
class Base
{
    public:
    T1 a;
    T2 b:
    Base (T1 a1,T2 b1)
    {
        a=a1;
        b=b1;
    }
    void display(){
        cout<<"The valu of a is "<<this->a<<endl;
        cout<<"The valu of a is "<<this->b<<endl;
    }
};
int main()
{
    Base<int,float> B1(54,43.43);
    B1.display();
    return 0;
}