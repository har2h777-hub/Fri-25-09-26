#include<stdio.h>
void main()
{
int side,perimeter;
clrscr();
printf("Enter side length of square:");
scanf("%d",&side);
perimeter=4*side;
printf("Your perimeter is:%d",perimeter);
getch();
}