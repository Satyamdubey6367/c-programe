#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a=12,b=5;
a= a++ + ++b;
b= ++a + b++;
printf("a=%d ,b=%d\n",a,b);
getch();
}