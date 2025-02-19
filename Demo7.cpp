// Swapping program without using thrid variable 

#include<conio.h>
#include<stdio.h>
int main()
{
    int x=10;
    int y=20;

    printf("x=%i\n",x);
    printf("y=%i\n",y);

    printf("After Swapping\n");

    x=x+y;
    y=x-y;
    x=x-y;

    printf("x=%i\n",x);
    printf("y=%i\n",y);

    getch();
}