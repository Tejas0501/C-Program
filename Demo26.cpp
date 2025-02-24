// Switch case statement

#include<conio.h>
#include<stdio.h>
int main()
{
    int x;
    int y,z;
    printf("Enter First Number\n");
    scanf("%d",&y);
    printf("Enter Second Number\n");
    scanf("%d",&z);
    printf("-------Operations-------\n");
    printf("For addition press 1\n");
    printf("For Substraction Perss 2\n");
    printf("For Multiplication Press 3\n");
    printf("For Divition Press 4\n");
    scanf("%d",&x);

    switch(x)
    {
      case 1:
      printf("The sum for two number are = %d",y+z);
      break;

      case 2:
      printf("The substraction for two number are = %d",y-z);
      break;

      case 3:
      printf("The Multiplication for two number are = %d",y*z);
      break;

      case 4:
      printf("The divition for two number are = %d",y/z);
      break;

      default:
      printf("Invalid option");

    }

    getch();
}