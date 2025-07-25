#include<iostream>
using namespace std;
class ITC
{
    public:
int x,y;
void getdata()
{
    cout<<"\n Enter two number";
    cin>>x>>y;
}
void mul()
{
    int z;
    z=x*y;
    cout<<"\n Multiplication="<<z;
}
};
int main()
{
    ITC ob;
    ob.getdata();
    ob.mul();    
    return 0;
}






// #include <iostream>
// using namespace std;

// class ITC
// {
// public:
//     int x, y;

//     void getdata()
//     {
//         cout << "\n Enter two numbers: ";
//         cin >> x >> y;  // ✅ fixed here
//     }

//     void mul()
//     {
//         int z;
//         z = x * y;
//         cout << "\n Multiplication = " << z;
//     }
// };

// int main()
// {
//     ITC ob;
//     ob.getdata();
//     ob.mul();

//     ITC ob1;
//     ob1.getdata();

//     return 0;
// }
