#include<iostream>
using namespace std;

class destr
{
    public:
    char name[20];
    int price;

    Destr()
    {
        cout<<"\n Enter name and price";
        cin>>name>>price;
    }
    ~Destr()
    {
        struct product P1,P2,P3,P4;
        cout<<"\n Enter product Name, Price";
        cin>>P1.Name>>P1.Price;
        cout<<"\n Product_Name="<<P1.Name;
        cout<<"\n Product_Price="<<P1.Price;
        cout<<"\n Enter product  Name, Price";
        cin>>P2.Name>>P2.Price;
        cout<<"\n Product_Name="<<P2.Name;
        cout<<"\n Product_Price="<<P2.Price;
        cout<<"\n Enter product Name, Price";
        cin>>P3.Name>>P3.Price;
        cout<<"\n Product_Name="<<P3.Name;
        cout<<"\n Product_Price="<<P3.Price;
        cout<<"\n Enter product  Name, Price";
        cin>>P4.Name>>P4.Price;
        cout<<"\n Product_Name="<<P4.Name;
        cout<<"\n Product_Price="<<P4.Price;
    }
};
int main()
{
    Destr ob;

    return 0;
}
