#include<iostream>
using namespace std;

class A
{
    public:
    int x,y;
    void getdata()
    {
        cout<<"\n Enter two number";
        cin>>x>>y;
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
class D:public B
{
    public:
    void add()
    {
        cout<<"\n Addition of x & y ="<<x+y;
    }
};
class E:public B
{
    public:
    void sub()
    {
        cout<<"\n Subtraction of x & y ="<<x-y;
    }
};
class F:public C
{
    public:
    void mul()
    {
        cout<<"\n Multiplication of x & y ="<<x*y;
    }
};
class G:public C
{
    public:
    void div()
    {
        cout<<"\n Division of x & y ="<<x/y;
    }
};
int main()
{
    B ob;
    ob.getdata();
    ob.sq();
    C k;
    k.getdata();
    k.cube();
    D m;
    m.getdata();
    m.add();
    E s;
    s.getdata();
    s.sub();
    F n;
    n.getdata();
    n.mul();
    G l;
    l.getdata();
    l.div();

    
    return 0;                                          
}