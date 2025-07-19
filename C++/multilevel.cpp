#include<iostream>
using namespace std;

class A
{
    public:
    char Name[20];
    int Price;
    
    void input()
    {
        cout<<" Enter name";
        cin>>Name;
        cout<<" Enter price";
        cin>>Price;
    }
};
class B:public A
{
    public:
    void showdata()
    {
        cout<<"\n Name="<<Name;
        cout<<"\n Price="<<Price;
    }
};
class C:public B
{
    public:
    void getoffer()
    {
        if(Price>100 && Price<=150)
        cout<<"\n Too low";
        else if(Price>150 && Price<=500)
        cout<<"\n Medium Price";
        else if(Price>500 && Price<=5000)
        cout<<"\n Offer Price";
        else
        cout<<"\n Thank for shopping";
    }
};
int main()
{
    C ob;
    ob.input();
    ob.showdata();
    ob.getoffer();
    return 0;
}
