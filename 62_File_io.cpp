#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string s;
    ofstream out;
    out.open("File(1).txt");
    out<<"Vishal is good boy"<<endl;
    out<<"Vishal is bed boy"<<endl;
    out<<"Vishal is smart boy"<<endl;
    out<<"Vishal is intelligent boy"<<endl;
    out.close();

    string st1,st2;
    ifstream in;
    in.open("File(1).txt");
    // in>>st1>>st2;
    // cout<<st1<<st2;
    while(in.eof()==0){ //eof() meaning is END OF FILE
        getline(in,st1);
        cout<<st1<<endl;
    }
    in.close();
    return 0;

}