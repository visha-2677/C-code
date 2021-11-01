#include<iostream>
using namespace std;
class student
{
    protected:
        int roll_number;
    public:
        void set_number(int);
        void get_number(void);
};
void student ::set_number(int r)
{
    roll_number=r;
}
void student ::get_number(void)
{
    cout<<"The roll number is = "<<roll_number<<endl;
}

class Exam:public student
{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks(void);
};
void Exam::set_marks(float m1,float m2)
{
    maths=m1;
    physics=m2;
}
void Exam::get_marks(void){
    cout<<"maths marks is  "<<maths<<endl;
    cout<<"physics marks is  "<<physics<<endl;
}

class Result:public Exam
{
    float parcentege;
    public:
        void display(){
            get_number();
            get_marks();
            cout<<"Your parcentege is  "<<(maths+physics)/2<<"%"<<endl;
        }
};
int main()
{
    /*                                                                         A(student)
    Notes:                                                                         |
      If we are Inheriting B from A and C From B:[ A ---> B ---> C ]               *
      1. A is the Base class for B and B is the Base class for C                B(Exam)
      2. A--->B--->C  is called  Inheritence path                                  |
                                                                                   *
                                                                               C(Result)
    */

    Result vishal;                                                            
    vishal.set_number(327);
    vishal.set_marks(91,90);
    vishal.display();
    return 0;
}