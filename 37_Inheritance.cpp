#include<iostream>
using namespace std;
// Base class
class Employee
{
    public:
    int Id;
    float salary;
        Employee(int Ipid){
            Id=Ipid;
            salary=49;
        }
        Employee(){}

};
// Derived class syntex
/*
class {{derived class}} : {{visible class}} : {{base class}}
{
    class members/member/etc....
}
Note:
1.Default visiblity mode is private
2.Public visiblity mode :Public members of the base class become public members of the 
derived class
3.private visiblity mode :private members of the base class become private member of the 
derived class
4.private member are never inherited
*/
class programmer : public Employee
{
    public:
    int languagecode;
    programmer(int Ipid){
        Id=Ipid;
        languagecode=23;
        salary=58;
    }
    void getdata(){
        cout<<"The  id  "<<Id<<endl;
    }
};
int main()
{
    Employee vishal(2),smit(23),suraj(34);
    cout<<vishal.salary<<endl;
    cout<<smit.salary<<endl;
    cout<<suraj.salary<<endl;
    programmer v(42);
    cout<<v.languagecode<<endl;
    cout<<v.Id <<endl;   //Error because of No use visible class 
    v.getdata();

    return 0;

}