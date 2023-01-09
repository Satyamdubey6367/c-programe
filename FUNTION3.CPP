#include<stdio.h>
#include<conio.h>
void sum(void);
void main()
{
clrscr();
sum();
getch();
}
void sum(void)
{
int a=10,b=20;
printf("sum=%d",a+b);
}