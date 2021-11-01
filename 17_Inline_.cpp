#include<iostream>
using namespace std;
inline int sum(int a,int b){
    return a*b;           // inline function use only for low line code in function
}                         // inline function use fast time compile program

float bank(int Mony,float intrest=1.04)  //changing variable last in function
{
    return Mony*intrest;
}
int main()
 {  
    int mony=100000;
    cout<<"Mony = "<<mony<<endl<<"Bank reciving mony = "<<bank(mony)<<"for after 1 year"<<endl;
    cout<<"VIP Man mony ="<<mony<<endl<<"Bank reciving mony = "<<bank(mony,1.1)<<"for after 1 year"<<endl;
//     int x,y;
//     cout<<"The valu of a and b=";
//     cin>>x>>y;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;
//     cout<<"The sum="<<sum(x,y)<<endl;

     return 0;
}