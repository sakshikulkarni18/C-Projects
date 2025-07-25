#include<iostream>
using namespace std;

int fact(int num)
{
    if(num==0)
    {
        return 1;
    }
    else
    {
        return num*fact(num-1);
    }
}
int main()
{
    long int num;
    cout<<"\n Enter Number";
    cin>>num;
    long int r=fact(num);
    cout<<"\n The factorial of"<<num<<"is"<<r;
    return 0;
}