// Swapping program using Assignment oprator 

#include<conio.h>
#include<stdio.h>
int main()
{
    int x=10;
    int y=20;

    printf("Before Swapping\n");

    printf("%d\n",x);
    printf("%d\n",y);
    x+=y;
    y=x-y;
    x-=y;

    printf("After Swapping\n");

    printf("%d\n",x);
    printf("%d\n",y);

    getch();
}