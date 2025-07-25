#include<iostream>
using namespace std;
class cons
{
    public:
    int age;

    cons()
    {
        cout<<"\n Enter age";
        cin>>age;
    }
    void cheack()
    {
        if(age>21)
        cout<<"\n Entry allowed";
        else
        cout<<"\n Wait for few years";
    }
};
int main()
{
    cons ob;
    ob.cheack();
    return 0;
}