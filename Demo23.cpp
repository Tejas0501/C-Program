//Taking input form the user using scanf function
// Addition of two numbers
#include<conio.h>
#include<stdio.h>
int main()
{
    int x;
    int y;

    printf("Enter First Number\n");
    scanf("%d",&x);

    printf("Enter Second Number\n");
    scanf("%d",&y);

    int z=x+y;

    printf("The sum of two number is = %d",z);

    getch();
}