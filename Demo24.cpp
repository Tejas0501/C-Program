//Program to find out grades of student 

#include<conio.h>
#include<stdio.h>
int main()
{
    int x,y,z;
    int t;
    int per;

    printf("Enter the marks of the student\n");// MATHS PHYSICS BIOLOGY
    scanf("%d%d%d",&x,&y,&z);

    t=x+y+z;

    per=t/3;

    if(per>85)
    {
        printf("Grade A");
    }
    if(per>=70 && per<85)
    {
        printf("Grade B");
    }
    if(per>=60 && per<70)
    {
        printf("Grade C");
    }
    if(per>=50 && per<60)
    {
        printf("Grade D");
    }
    if(per>=35 && per<50)
    {
        printf("Grade E");
    }
    if(per<35)
    {
        printf("Grade F");
    }

    getch();
}