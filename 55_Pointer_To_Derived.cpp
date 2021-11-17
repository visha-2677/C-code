#include <iostream>
using namespace std;
class Base
{
public:
    int base;
    void display()
    {
        cout << "1 the valu of base is " << base << endl;
    }
};
class Dirived : public Base
{

public:
    int dirived;
    void display()
    {
        cout << "2 the valu of base is " << base << endl;
        cout << "2 the valu of dirived is " << dirived << endl;
    }
};
int main()
{
    //Dirived *base_pointer;//not same output beacuse of dirived pointer
    Base *base_pointer;   //not same output beacuse of Base pointer
    Base obj_Base;
    Dirived obj_Dirived;
    // Base class to point to 
    base_pointer = &obj_Dirived;
    base_pointer->base=432;
    // base_pointer->dirived=2289;//error throw 
    base_pointer->display();

    // Dirived *dirived_pointer;
    // dirived_pointer=&obj_Dirived;
    // dirived_pointer->base=839;
    // dirived_pointer->dirived=398;
    // dirived_pointer->display();
    return 0;
}