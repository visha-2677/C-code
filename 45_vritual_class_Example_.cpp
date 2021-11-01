#include<iostream>
using namespace std;
/*                               student 
student-->test                      |
student-->sports                    *
test-->result            ------------------------
sports-->result          |                      |
                         *                      *
                       test                     sports
                         |                      |
                         ------------------------
                                     |
                                   result
*/ 
class student
{
    protected :
        int roll_no;
    public:
        void set_number(int a){
        roll_no=a;
        }
        void print_number(){
            cout<<"Your roll number is "<<roll_no<<endl;
        }
};
class Test : virtual public student
{
    protected:
        float maths,physics;
    public: 
        void set_mark(float m1,float m2)
        {
            maths=m1;
            physics=m2;
        }
        void print_mark()
        {
            cout<<"Your mark is Here :"<<endl;
            cout<<"maths :"<<maths<<endl;
            cout<<"physics :"<<physics<<endl;
        }
};
class sports:virtual  public student
{
    protected:
        float score;
    public:
        void set_score(float sc)
        {
            score=sc;
        }
        void print_score()
        {
            cout<<"Your sports score is :"<<score<<endl;
        }
};
class Result: public Test,public sports 
{
    protected:
        float Total;
    public:
    void DisplayResult(void){
        Total=maths+physics+score;
        print_number();
        print_mark();
        print_score();
        cout<<"Your Total result is : "<<Total<<endl;
    }   
};
int main()
{
    Result vishal;
    vishal.set_number(532);
    vishal.set_mark(90,90);
    vishal.set_score(9);
    vishal.DisplayResult();
    return 0;
}