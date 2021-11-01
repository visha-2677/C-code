#include<iostream>
using namespace std;
int main()
{
    int mark[]={1,2,3,4};
    cout<<mark[0]<<endl;
    cout<<mark[1]<<endl;
    cout<<mark[2]<<endl;
    cout<<mark[3]<<endl;

    int mathmark[4];
    mathmark[0]=53;
    mathmark[1]=536;
    mathmark[2]=52;
    mathmark[3]=43;
    cout<<"math mark"<<endl;
    // cout<<mathmark[0]<<endl;
    // cout<<mathmark[1]<<endl;
    // cout<<mathmark[2]<<endl;
    // cout<<mathmark[3]<<endl;

    for(int i=0;i<4;i++)
    {
        cout<<"math mark "<<i<<"= "<<mathmark[i]<<endl;
    }

    //pointer to array
    int* p=mark;
    cout<<"mark="<<*(p)<<endl;
    cout<<"mark="<<*(p+1)<<endl;
    cout<<"mark="<<*(p+2)<<endl;
    cout<<"mark="<<*(p+3)<<endl;
    cout<<*(p++);
    cout<<*p;
    cout<<*(++p);

    return 0;
}