#include<iostream>
using namespace std;
struct product 

{
    int id;
    char Name[20];
    int price;
};
int main()
{
int i;
struct product P[5];
for(i=0;i<=4;i++)
{
    cout<<"\n enter id ,name, price";
    cin>>P[i].id>>P[i].Name>>P[i].price;
}
for(i=0;i<=0;i++) {
    cout<<"\n id="<<P[i].id;
    cout<<"\n name="<<P[i].Name;
    cout<<"\n price="<<P[i].price;
}
return 0;
}