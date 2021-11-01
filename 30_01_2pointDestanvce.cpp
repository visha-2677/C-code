#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
class point
{
    int x,y;
    public:
        point(int a,int b){
            x=a;
            y=b;
        }
        friend point pointDistance(point i,point j);
        void display(){
            cout<<"The point of ("<<x<<","<<y<<")"<<endl;
        }
};
point pointDistance(point i,point j){
    int A=j.x-i.x;
    int B=j.y-i.y;
    double dis=(A*A) + (B*B);
    float s=sqrt(dis);

    cout<<"*****Distance******"<<endl<<setw(9)<<s;
}

int main()
{
    point p(0,1);
    p.display();

    point q(0,6);
    q.display();

    pointDistance(p,q);

    return 0;
}