#include<iostream>
using namespace std;
 
class Destr
{
    public:
    int Mark;
    Destr()
    {
        cout<<"\n Enter Mark";
        cin>>Mark;
    }
    ~Destr()
    {
        if(Mark>90)
        cout<<"\n You are eligible for scholarship";
        else 
        cout<<"\n You are not eligible for scholarship";
    }
};
int main()
{
    Destr ob;
    return 0;
}