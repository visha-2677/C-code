#include<iostream>
using namespace std;
class simple
{
    int data1;
    int data2;
    int data3;
    public:
        simple(int a,int b,int c=45){   //Defualt constracor 
            data1=a;
            data2=b;
            data3=c;
        }
        void Display(){
            cout<<"The valu of  "<<data1<<" and "<<data2<<" and "<<data3<<endl;
        }
};
int main()
{
    simple s(34,23,75);  //print c=75 Constasctor default
    s.Display();
    return 0;
}