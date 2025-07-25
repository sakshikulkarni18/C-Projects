#include<iostream>
using namespace std;

class Encap
{
    private:
    int marks;

    public:
    void input()
    {
        cout<<"\n Enter marks";
        cin>>marks;
    }
    void show()
    {
        cout<<"\n Your marks is"<<marks;
    }
    void check()
    {
        if(marks>=90 && marks<=100)
        cout<<"\n You are elegible for government college";
        else if(marks>=55 && marks<=89)
        cout<<"\n You are elegible for private college";
        else
        cout<<"\n Take 1 year back";
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
