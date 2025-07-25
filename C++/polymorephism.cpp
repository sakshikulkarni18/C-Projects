#include<iostream>
using namespace std;

class poly
{
    public:
    double x,y;
    char m,n;
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
    void show(char e ,char f)
    {
    m=e;
    n=f;
    cout<<"\n show char of m="<<m;
    cout<<"\n The value of n="<<n;
    }
};
int main()
{
    poly p;
    p.show(72,30);
    p.show(10.50,20.50);
    p.show('A','B');
    return 0;
}