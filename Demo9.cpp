// Relational Operator
/*
< Less than 
> Greater than
<= Less than or equal to 
>= Greater than or equal to
!= Not Equal to
== Equal to 
*/
// 0 means false
// 1 means true
#include<conio.h>
#include<stdio.h>
int main()
{ 
    int x=10;
    int y=7;

    printf("%d",x<y);//0
    printf("%d",x>y);//1
    printf("%d",x<=y);//0
    printf("%d",x>=y);//1
    printf("%d",x!=y);//1
    printf("%d",x==y);//0

    getch();

}