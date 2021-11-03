#include<iostream>
using namespace std;
/*
Syntax intialization list of Constractor:
Constractor (argument-list) : intialization-section
{
    //code
}
*/
class Test{
    int a;
    int b;
    public:
        // Test (int i,int j) : a(i),b(j)
        // Test (int i,int j) : a(i),b(j+i)
        // Test (int i,int j) : a(i),b(2*j)
        // Test (int i,int j) : a(i),b(a+j)
        Test (int i,int j) : a(b+i),b(j)
        {
            cout<<"Constractore executed"<<endl;
            cout<<" a valu is "<<a<<endl;
            cout<<" b valu is "<<b<<endl;
        } 
};
int main()
{
    Test t(2,3);
    return 0;
}
