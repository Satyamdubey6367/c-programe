#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter a no");
scanf("%d",&n);
if(n<0)n= -n;
printf("absolute value=%d",n);
getch();

}