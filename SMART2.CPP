#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter a,b,c value ");
scanf("%d %d %d",&a,&b,&c);
if(a==b&&a==c)puts("all are equal");
else if(a==b&&a>c)printf("a & b are big");
else if(b=c&& b>a)printf("b&c is big");
else if (a==c && a>b)printf("a&c is big");
else if (b>c) printf("c is big");
else printf("c is big");
getch();
}