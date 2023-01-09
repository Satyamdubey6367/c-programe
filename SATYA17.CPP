#include<stdio.h>
#include<conio.h>
void main()
{
int age;
clrscr();

printf("enter person age");
scanf("%d",&age);
if(age>=18) puts("eligible"); else puts("not eligible");
getch();
}
