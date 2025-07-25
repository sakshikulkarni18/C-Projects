#include<iostream>
using namespace std;
struct product
{
    int id;
    char Name[20];
    float Price;
};
int main()
{
    struct product P1,P2,P3,P4;
    cout<<"\n Enter product id, Name, Price";
    cin>>P1.id>>P1.Name>>P1.Price;
    cout<<"\n Product id="<<P1.id;
    cout<<"\n Product_Name="<<P1.Name;
    cout<<"\n Product_Price="<<P1.Price;
    cout<<"\n Enter product id, Name, Price";
    cin>>P2.id>>P2.Name>>P2.Price;
    cout<<"\n Product id="<<P2.id;
    cout<<"\n Product_Name="<<P2.Name;
    cout<<"\n Product_Price="<<P2.Price;
    cout<<"\n Enter product id, Name, Price";
    cin>>P3.id>>P3.Name>>P3.Price;
    cout<<"\n Product id="<<P3.id;
    cout<<"\n Product_Name="<<P3.Name;
    cout<<"\n Product_Price="<<P3.Price;
    cout<<"\n Enter product id, Name, Price";
    cin>>P4.id>>P4.Name>>P4.Price;
    cout<<"\n Product id="<<P4.id;
    cout<<"\n Product_Name="<<P4.Name;
    cout<<"\n Product_Price="<<P4.Price;
 
    return 0;
}