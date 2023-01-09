#include<stdio.h>
#include<conio.h>
void main()
{
int b,p,pow;
long s=0;
clrscr();
printf("enter base,power values");
scanf("%d %d",&b, &p);
while(p>=1)
{
s=s+pow(b,p);p--;
}
printf("powers sum=%ld",s);
getch();
}