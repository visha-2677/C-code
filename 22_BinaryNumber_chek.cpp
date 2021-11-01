#include<iostream>
using namespace std;
class Binary
{   //private:
    string s;
    public:
        void read(void);
        void chec_binary(void);
        void Interchange(void);
        void Display(void);
};

void Binary :: read(void){
    cout<<"Enter Binary Number";
    cin>>s;
}

void Binary :: chec_binary(void){
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary Number "<<endl;
            exit(0);
        }
    }
}

void Binary :: Interchange(void){
    chec_binary();
    for(int i=0;i<s.length();i++)
    {
        if (s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}

void Binary :: Display(void)
{
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
}
int main()
{   Binary b;
    b.read();
    // b.chec_binary();
    b.Interchange();
    b.Display();
    
    return 0;
}