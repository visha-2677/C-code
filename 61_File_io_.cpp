#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out("File(1).txt");
    string s;
    // // s="vishal is great man";
    // // out<<s;
    cout<<"Enter in file data"<<endl;
    cin>>s;

    out<<s;

    out.close();
    ifstream in("File(1).txt");
    string st;
    in>>st;
    getline(in,st);
    cout<<"The st is "<<st;
    return 0;
}