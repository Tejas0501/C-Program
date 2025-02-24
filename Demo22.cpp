//Find largest no between four numbers

#include<conio.h>
#include<stdio.h>
int main()
{
    int x=100;
    int y=9;
    int z=20;
    int a=25;

    if(x>y && x>z && x>a)
    {
        printf("X is the largest no");
    }
    if(y>x && y>z && y>a)
    {
        printf("Y is the largest no");
    }
    if(z>x && z>y && z>a)
    {
        printf("Z is the largest no");
    }
    if(a>x && a>y && a>z)
    {
        printf("A is the largest no");
    }

    getch();
}