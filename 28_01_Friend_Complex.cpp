#include<iostream>
using namespace std;
class c2;
class c1
{
 int a;
    friend void Exchange(c1 & ,c2 & );
    public:
        void setdata(int val1){
            a=val1;
        }
        void diaplay(){
            cout<<"The a ="<<a<<endl;
        }
        
};

class c2
{
    int b;
    public:
     friend void Exchange(c1 & ,c2 &);
        void setdata(int val2){
            b=val2;
        }
        void diaplay(){
            cout<<"The b ="<<b<<endl;
        }
       
};

void Exchange(c1 & X,c2 & Y){
    int temp=X.a;
    X.a=Y.b;
    Y.b=temp;
}
int main()
{
    c1 v;
    v.setdata(2);
    c2 s;
    s.setdata(5);
    Exchange(v,s);
    cout<<"The valu of c1 =";
    v.diaplay();
    cout<<"The valu of c2 =";
    s.diaplay();    
   return 0;
}