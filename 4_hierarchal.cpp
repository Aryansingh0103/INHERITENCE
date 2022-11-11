#include<iostream>
#include <math.h>
using namespace std;
//#define pi 3.14
class shape
{
    public:
    int r;
    int b, h, l;
};
class circle : public shape
{
    public:
    float a;
    void area(int q);
};
void circle :: area(int q)
{
    r=q;
    a=3.14*r*r;
    cout<<"area of circle = "<<a<<endl;
}
class triangle : public shape
{
    public:
        int a;
        void area (int q, int w);
};
void triangle :: area (int q, int w)
{
    b=q;h=w;
    a=0.5*b*h;
    cout<<"Area of triangle = "<<a<<endl;
}
class rectangle : public shape
{
    public :
        int a;
        void area (int q, int w)
        {
            l=q;b=w;
            a=l*b;
            cout<<"area of rectangle = "<<a<<endl;
        }
};
int main(int argc, char const *argv[])
{
    shape s;
    circle c;
    triangle t;
    rectangle r;
    c.area(25);
    t.area(12,18);
    r.area(7,17);
    return 0;
}