#include<stdio.h>
//#include<conio.h>
int main()
{
    char ch;
    int x,y;
    printf("\n Enter choices(+,_,*,/)");
    scanf("%c",&ch);
    printf("\n Enter first value");
    scanf("%d",&x);
    printf("\n Enter second value");
    scanf("%d",&y);
    switch(ch)
    {
        case'+':
        printf("\n Addition=%d",x+y);
        break;
        case'-':
        printf("\n Subtraction=%d",x-y);
        break;
        case'*':
        printf("\n Multiplication=%d",x*y);
        break;
        case'/':
        printf("\n Division=%d", x/y);
        break;
        default:
        printf("\n Invalid choice");
    }
return 0;
}
