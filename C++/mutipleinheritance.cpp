#include<iostream>
using namespace std;

class A
{
    public:
    int x;
    void getdata()
    {
        cout<<"Enter number";
        cin>>x;
    }
};
class B:public A
{
    public:
    void sq()
    {
        cout<<"\n Square of x="<<x*x;
    }
};
class C:public A
{
    public:
    void cube()
    {
        cout<<"\n Cube of x="<<x*x*x;
    }
};
int main()
{
    B objB;
    C objC;
    objB.getdata();
    objC.x=objB.x;
    objB.sq();
    objC.cube();
    return 0;
}