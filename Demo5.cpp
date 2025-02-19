// Swapping progrma uning third variable 
#include<conio.h>
#include<stdio.h>
int main()
{
    int x=2;
    int y=5;
    int t;

    printf("x=%i\n",x);
    printf("y=%i\n",y);

    printf("Ater swapping\n");

    t=x;
    x=y;
    y=t;

    printf("x=%i\n",x);
    printf("y=%i\n",y);


}