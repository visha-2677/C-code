#include<iostream>
using namespace std;

class Employee
{
    private:
    int a,b,c;

    public:
    int d,e;
    //   void setdata(int a1,int b1,int c1)
    //   {
    //       a=a1;
    //       b=b1;
    //       c=c1;
    //   }
      void  setdata(int a,int b,int c);
      void getdata(){
          cout<<"The valu of ="<<a<<endl;
          cout<<"The valu of ="<<b<<endl;
          cout<<"The valu of ="<<c<<endl;
          cout<<"The valu of ="<<d<<endl;
          cout<<"The valu of ="<<e<<endl;
      }

};

void Employee :: setdata(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    Employee vishal;
    // vishal.a=12;    // not use becouse of private varible
    vishal.d=23;
    vishal.e=45;
    vishal.setdata(2,3,4);
    vishal.getdata();
    return 0;
}
