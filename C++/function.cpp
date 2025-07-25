#include<iostream>
using namespace std;
void sq();
void cube();

int main()
{
    sq();
    cube();
    sq();
    cube();
    return 0;
}
void sq()
{
    int x;
    cout<<"\n Enter number";
    cin>>x;
    cout<<"\n Square of x="<<x*x;
}
void cube()
{
    int x;
    cout<<"\n Enter number";
    cin>>x;
    cout<<"\n Cube of x="<<x*x*x;
}