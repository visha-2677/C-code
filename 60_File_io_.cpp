#include<iostream>
#include<fstream>
/*
*The usefull classes for working in c++:
1.fstreambase
2.ifstream-->dirived from fstreambase class
2.ofstream-->dirived from fstreambase class

*In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

1.Using the constructor
2.Using the member function open() of the class
*/
using namespace std;
int main()
{
    string st="vishal  fkjshfherhhihfhis jdnjkfkjhdshfdh nfwhfihdiufhuihsifhd";
    // opning file with constractor and writing it
    ofstream out("60_File_1.text");
    out<<st;
    out.close();
    string st2;
    // opning file with constractor and reading it
    ifstream in("60_File_1.txt");
    in>>st2;
    getline(in,st2);
    cout<<st2;
    return 0;
}

