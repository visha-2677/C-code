#include<iostream>
using namespace std;
class Bank
{
    int principal;
    int year;
    float interstRate;
    float returnvalu;
    public:
        Bank(){}
        Bank(int p,int y,float r);
        Bank(int p,int y,int r);
        void Display();
};
Bank :: Bank (int p,int y,float r){
            principal=p;
            year=y;
            interstRate=r;
            returnvalu=p;
            for(int i=0;i<y;i++){
                returnvalu=returnvalu * (1+interstRate);
            }
}
Bank :: Bank (int p,int y,int r){
            principal=p;
            year=y;
            interstRate=r;
            returnvalu=float(r)/100;
            for(int i=0;i<y;i++){
                returnvalu=returnvalu * (1+interstRate);
            }
}
void Bank :: Display(){
    cout<<"Principal valu"<<principal<<endl
        <<"year of"<<year<<endl
        <<"returnvalu of "<<returnvalu<<endl;
}
int main()
{
    Bank M1,M2,M3;
    int p,y;
    float r;
    int R;

    cout<<"Enter the valu p,y and r";
    cin>>p>>y>>r;
    M1=Bank( p, y, r);
    M1.Display();

    cout<<"Enter the valu p,y and R";
    cin>>p>>y>>R;
    M2=Bank(p, y, R);
    M2.Display();
    return 0;
}