#include<iostream>
using namespace std;

class Encap
{
    private:
    int age;

    public:
    void input()
    {
        cout<<"\n Enter age";
        cin>>age;
    }
    void show()
    {
        cout<<"\n Your age is"<<age;
    }
    void check()
    {
        if(age>18 && age<30)
        cout<<"\n Your eligible for this position";
        else if(age>=1 && age<=18)
        cout<<"\n Wait for few years";
        else
        cout<<"\n Your age board";
    }
};
int main()
{
    Encap e;
    e.input();
    e.show();
    e.check();
    return 0;
}