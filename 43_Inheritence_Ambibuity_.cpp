#include<iostream>
using namespace std;

// Ambibuity 1 
class Base1
{
    public:
        void word(){
            cout<<"How are you ?"<<endl;
        }
};
class Base2
{
    public:
        void word(){
            cout<<"kaishe ho ?"<<endl;
        }
};
class Base3 :public Base1,public Base2
{
    public:
    // word();        // 1 st Ambibuity
    void word(){
    Base1::word();    // 1 st Ambibuity solved
    }
};


// Ambibuity 2
class B
{
    public:
    void say(){
        cout<<"Hello world"<<endl;
    }
};
class D:public B
{
    public:
    void say(){
        cout<<"Hello My world is beautifull "<<endl;
    }
};
int main()
{
    // Ambibuity 1
    // Base1 B1;
    // B1.word();
    // Base2 B2;
    // B2.word();
    // Base3 B3;
    // B3.word();    1 st Ambibuity
    // B3.word();    // 1 st Ambibuity solved

    //Ambibuity 2
    B v;
    v.say();
    D i;
    i.say();          //Ambibuity 2 is Auto Resolve
    return 0;
}