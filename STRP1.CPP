#include<stdio.h>
#include<conio.h>
struct test
{
int *p,*q;
}
t;
void main()
{
int a=100,b;
t.p=&a;
t.q=&b;
*t.q=a;
clrscr();
printf("a=%d,b=%d",*t.p,*t.q);
getch();
}