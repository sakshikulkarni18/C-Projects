#include<iostream>
using namespace std;

class Base
{
    public:
    char Name[20];
    int Price;
    
    void input()
    {
        cout<<"\n Enter Product Name";
        cin>>Name;
        cout<<"\n Enter Product Price";
        cin>>Price;
    }
    void showdeta()
    {
        cout<<"\n Product_Name="<<Name;
        cout<<"\n Product_Price="<<Price;
    }
};
class Derived:public Base
{
    public:
    void offer()
    {
        char shampoo[20];
        if(Price>500)
        cout<<"\n Offer applied";
        else
        cout<<"\n Offer not applied";
    }
    
};
int main()
{
    Derived d;
    d.input();
    d.showdeta();
    d.offer();
    return 0;
}