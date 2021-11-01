#include<iostream>
using namespace std;
int main()
{
    //using break
    for(int i=0;i<10;i++)
    {
       // cout<<i<<endl;
        if(i==5)
        {
            // break;
            continue;
        }
        cout<<i<<endl;
    }
return 0;
}