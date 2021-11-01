#include<iostream>
using namespace std;
class shop
{
    int itemId[200];
    int itemprice[200];
    int counter=0;
    public:
        void setprice(void);
        void Displayprice(void);
};

void shop :: setprice(void){
    cout<<"Enter item Id of item no="<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter item price  "<<endl;
    cin>>itemprice[counter];
    counter++;
}

void shop ::Displayprice(void)
{
    for (int i=0;i<counter;i++)
    {
        cout<<"Item Id =  "<<  itemId[i]<<"  item price =  "<<   itemprice[i]<<endl;
    }
}

int main()
{
    shop dukan;
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.Displayprice();
    return 0;
}