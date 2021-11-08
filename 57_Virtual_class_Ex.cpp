#include<iostream>
using namespace std;
class Vishal
{
    protected:
        string tital;
        float rating;
    public:
        Vishal(string s,float r){
            tital=s;
            rating=r;
        }
        virtual void display()
        {
            // cout<<"Vishal Display";
        }
};

class VishalVideo: public Vishal
{
    float Videolength;
    public:
        VishalVideo(string s,float r,float vl):Vishal(s,r){
            Videolength=vl;
        }
        void display()
        {
            cout<<"This video tital is "<<tital<<endl;
            cout<<"Rating : "<<rating<<"out of 5"<<endl;
            cout<<"video length is "<<Videolength<<endl;
        }
};
class VishalText: public Vishal
{
    int TextWord;
    public:
        VishalText(string s,float r,int w):Vishal(s,r)
        {
            TextWord=w;
        }
        void display()
        {
            cout<<"This Text tital is "<<tital<<endl;
            cout<<"Rating : "<<rating<<"out of 5"<<endl;
            cout<<"Text word is "<<TextWord<<endl;
        }
};
int main()
{
    string tital;
    float rating ,vlength;
    int wlength;
    //Simple 
    //video 
    tital="CppCourse";
    rating=4.99;
    vlength=484;
    VishalVideo CppCourse(tital,rating,vlength);
    CppCourse.display();

    //Text
    tital="Cpp course Text";
    rating=4.99;
    wlength=345;
    VishalText CppText(tital,rating,wlength);
    CppText.display();

    //Pointer 
    // Vishal * Tuts[2];         //problem is Display function is not virtual then display print is Vishal(main)(pointing class)
    // Tuts[0]=&CppCourse;
    // Tuts[1]=&CppText;

    // Tuts[0]->display();
    // Tuts[1]->display();
    return 0;
}
// The Rule of virtual function
// 1. They cannot be a static
// 2. They are accessed by object pointers
// 3. Virtual function can be a friend of another function
// 4. A virtual function in the base class might not be used.
// 5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class

 