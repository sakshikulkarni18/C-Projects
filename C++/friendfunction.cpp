#include<iostream>
using namespace std;

class Demo
{
    private:
    int x,y;

    public:
    void input()
    {
        cout<<"\n Enter two numbers:";
        cin>>x>>y;
    }
    friend void add (Demo ob);
    friend void sub (Demo ob);
    friend void mul (Demo ob);
    friend void div (Demo ob);
};
 void add(Demo ob)
{
    int z;
    z=ob.x+ob.y;
    cout<<"\n Addition:"<<z;
}
void sub(Demo ob)
{
    int z;
    z=ob.x-ob.y;
    cout<<"\n Subtraction:"<<z;
}
void mul(Demo ob)
{
    int z;
    z=ob.x*ob.y;
    cout<<"\n Multiplication"<<z;
}
void div(Demo ob)
{
    int z;
    z=ob.x/ob.y;
    cout<<"\n Division:"<<z;
}
int main()
{
    Demo d;
    d.input();
    add(d);
    sub(d);
    mul(d);
    div(d);
    return 0;
}