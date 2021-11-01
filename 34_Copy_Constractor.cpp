#include<iostream>
using namespace std;
class Constractor
{
    int  a;
    public:
        Constractor(){
            a=0;
        }
        Constractor(int num ){
            a=num;
        }
        Constractor(Constractor &cop){
            cout<<"Copy constractor"<<endl;
            a=cop.a;
        }
        void Dispalay(){
            cout<<"The valu of a is  "<<a<<endl;
        }
};
int main(){
    Constractor A,B,C(34),z3;
    A.Dispalay();
    B.Dispalay();
    C.Dispalay();

    Constractor z1(C);
    z1.Dispalay();

    z3=C;
    z3.Dispalay();

    Constractor Z2(C);
    z1.Dispalay();
    return 0;
}