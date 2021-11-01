#include<iostream>
using namespace std;
class Base
{
    protected:
    int a;
    private:
    int b;  
};
class Derived: protected Base
{
    
};
/*
for all members
                           public Derivation    priviate Derivation    protected Derivation
    1.priviate members      Not Inherited        Not Inherited           Not Inherited    
    2.protected members      protected            priviate                protected
    3.public members         public               priviate                protected
*/
int main()
{
    Base v;
    Derived s;
    // cout<<v.a;   //Wil not work sine a is protected
    // cout<<s.a;       //Wil not work sine a is protected
    return 0;
}