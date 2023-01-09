#include<stdio.h>
#include<conio.h>

void main()
{
int b,p;
long pwr=1,s=0;
clrscr();
printf("enter base ,power values");
scanf("%d %d",&b,&p);
while(p>=1)
{
pwr=pwr*b;s=s+pwr;
p--;
}
printf("powers sum=%ld",s);
getch();
}


