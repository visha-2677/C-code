#include <iostream>
using namespace std;
class Employee
{
    int Id;
    //  int count=0;
    // static int count=200;     // ERROR
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter Employee Id";
        cin >> Id;
        count++;
    }
    void getdata(void)
    {
        cout << "The Employee Id =" << Id << "  is "
             << "  Employee Number = " << count << endl;
    }
    static void getcount(void)
    {
        // cout<<Id;  // Error thro because of only static variable use int static function
        cout << "The Employee Number is" << count << endl;
    }
};
// Count is the static data member of class Employee
int Employee::count = 2000; // Default value is 0

int main()
{
    Employee vishal, smit, suraj;
    vishal.setdata();
    vishal.getdata(); //Not counnt Employee Number Because of only  1 object use and
    // Employee ::getcount(); //Not use static varible

    smit.setdata();
    smit.getdata();
    // Employee ::getcount();

    suraj.setdata();
    suraj.getdata();
    // Employee ::getcount();
    return 0;
}