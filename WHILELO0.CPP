#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,s=0,i=1;
printf("enter n value");
scanf("%d",&n);
while(i<=n)
{
s=s+i;
i++;
}
printf("sum =%d,mean=%.2f",s,(float)s/n);
getch();
}

/*  sum avg*/