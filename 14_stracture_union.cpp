#include<iostream>
using namespace std;
// typedef struct Emp
// {
//     int Empno;         // stuct use biytes 4 int + 4 float + 1 char =9 bytes use  
//     float salry;
//     char Empfchar;
// }E;
typedef union Emp
{
    int Empno;        // union ony use maximum bytes use meomry
    float salry;       // only use 4 bytes
    char Empfchar;
}E;

int main()
{   
    E vishal;
    // struct Emp smit;
    // struct Emp suraj;
    union Emp smit;
    union Emp suraj;
    vishal.Empno=234;
    vishal.salry=23.45;
    vishal.Empfchar='v';
    cout<<"The Emp data="<<vishal.Empno<<endl;
    cout<<"The Emp data="<<vishal.salry<<endl;
    cout<<"The Emp data="<<vishal.Empfchar<<endl;
    return 0;
}