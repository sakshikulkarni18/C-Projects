#include<iostream>
using namespace std;

class poly
{
    public:
    double x,y;
    void show(double a , double b)
    {
        x=a;
        y=b;
        cout<<"\n The value of x="<<x;
        cout<<"\n The value of y="<<y;
    }
    void show(int a , int b)
    {
        x=a;
        y=b;
        cout<<"\n The value of x="<<x;
        cout<<"\n The value of y="<<y;
    }
};
polymorphism

int main()
{
    poly p;
    p.show(72,30)
    p.show(10.5,20.5)
    return 0;
}