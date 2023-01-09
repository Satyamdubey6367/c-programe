#include<stdio.h>
#include<conio.h>
#define p printf
void main()
{
int n,f1=0,f2=1,f3,i;
clrscr();
p("enter no of times");
scanf("%d",&n);
if(n<=0)p("series not possible");
else if(n==1)p("0");
else
{
p("0   1");
for(i=3;i<=n;i++)
{
f3=f1+f2;
p("%4d",f3);f1=f2;f2=f3;
}
}
getch();
}
