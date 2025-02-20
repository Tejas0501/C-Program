// Assingment operators 
/*
x=y (y value assign in x)
x+=y (x=x+y)
x-=y (x=x-y)
x*=y (x=x*y)
x/=y (x=x/y)
x%=y (x=x%y)
*/
#include<conio.h>
#include<stdio.h>
int main()
{
    int x=2;
    int y=4;

    x+=y;
    y-=x;
    x-=x;
    y*=x;

    printf("%d\n",x);
    printf("%d\n",y);

    getch();

}