#include<iostream>
using namespace std;
class Y;
class X
{
    int data;
    public:
        void setdata(int valu){
            data=valu;
        }
    friend void add(X,Y);       // Function friend for class
};

class Y
{
    int num;
    public:
        void setdata(int valu){
            num=valu;
        }
    friend void add(X,Y);
};
void add(X o1,Y o2)
{
    cout<<"sum X and Y ="<<o1.data+ o2.num;
};

int main()
{
    X a1;
    a1.setdata(1);

    Y a2;
    a2.setdata(3);

    add(a1,a2);
    return 0;
}