#include<iostream>
using namespace std;
void show(Ta a,Tb b)
{
    cout<<"\n Value of a="<<a;
    cout<<"\n Value of b="<<b;
}
int main()
{
    int p=10,q=29;
    char m='a',n='b';
    float s=18.18,v=18.17;
    show(p,q);
    show(m,n);
    show(s,v);
    return 0;
}