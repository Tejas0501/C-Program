//Find the largest number using nestedif 

#include<conio.h>
#include<stdio.h>
int main()
{
    int x=10;
    int y=20;
    int z=30;

    if(x>y)
    {
        if(x>z)
        {
            printf("X is largest");
        }
    }
    if(y>x)
    {
        if(y>z)
        {
            printf("y is largest");
        }
    }
    if(z>x)
    {
        if(z>y)
        {
            printf("z is largest");
        }
    }

    getch();
}