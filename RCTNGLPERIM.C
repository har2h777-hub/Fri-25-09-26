#include<stdio.h>
void main()
{
int length,breadth,perimeter;
clrscr();
printf("Enter length of rectangle:");
scanf("%d",&length);
printf("Enter breadth of rectangle:");
scanf("%d",&breadth);
perimeter=(length*2)+(breadth*2);
printf("Your perimeter is:%d",perimeter);
getch();
}