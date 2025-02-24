// ternary operator
/*
syntax

condition?expression 1(if true);expression 2(if false)
*/
#include<conio.h>
#include<stdio.h>
int main()
{
 int x=10;
 int y=20;
 int a=(x>y)?x:y;

 printf("the largest number is = %d",a);

 getch();
}