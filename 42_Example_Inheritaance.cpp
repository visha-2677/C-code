#include<iostream>
#include<math.H>
using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/
class SimpleCalculatore
{
    public:
    float a,b;
    float s;
    void set_number(float x,float y)
    {
        a=x;
        b=y;    
    }
    void DisplayCalc(){
        cout<<"a + b ="<<a+b<<endl;
        cout<<"a - b ="<<a-b<<endl;
        cout<<"a * b ="<<a*b<<endl;
        cout<<"a / b ="<<a/b<<endl;
    }
};
class ScientificCalculator
{
    public:
    float y,b,r;
    void set_scinumber(float x){
        y=x;
    }
    void DisplayScalc(){
        r=(y*3.14)/180;
        cout<<"valu of sin "<<y<<" = "<<sin(r)<<endl;
        cout<<"valu of cos "<<y<<" = "<<cos(r)<<endl;
    }
};
class HybridCalculator : public SimpleCalculatore,public ScientificCalculator
{
    public:
        void show(){
            DisplayCalc();
            DisplayScalc();
            cout<<"The valu (a ="<<a<<")"<<" + (sin"<<y<<"="<<sin(r)<<")"<<" = "<<a+sin(r)<<endl;
            cout<<"The valu (a ="<<a<<")"<<" + (cos"<<y<<"="<<cos(r)<<")"<<" = "<<a+cos(r)<<endl;
        }
};
int main()
{
    HybridCalculator vishal;
    vishal.set_number(1,2);
    vishal.set_scinumber(30);
    vishal.show();
    return 0;
}