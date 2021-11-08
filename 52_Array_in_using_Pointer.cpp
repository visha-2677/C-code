#include<iostream>
using namespace std;
class Shop
{
    int Id;
    float price;
    public:
        void setdata(int a,int b)
        {
            Id=a;
            price=b;
        }
        void getdata()
        {
            cout<<"Shop Id is "<<Id<<endl;
            cout<<"Shop price is "<<price<<endl;
        }
};
            //   1 2 3
            //   ^
            //   |
            //   |
            //   |
            //   ptr
            // TempPtr

int main()
{
    // int *ptr = new int [3];

    int number=3;
    Shop *ptr = new Shop [number];
    Shop *TempPtr=ptr;
    int q;
    int e;
    for(int i=0;i<number;i++)
    {
        cout<<"Enter shop Id and price is "<<i+1<<endl;
        cin>>q>>e;
        // (*ptr).setdata(q,e);
        ptr->setdata(q,e);
        ptr++;
    }
    for(int i=0;i<number;i++)
    {
        cout<<"Shop number"<<i+1<<endl;
        TempPtr->getdata();
        cout<<endl;
    }
    return 0;
}