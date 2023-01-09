#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i=1,n;
printf("enter n value");
scanf("%d",&n);
while(i<=100*n)
{
printf("%5d",i);
i++;
}
getch();
}

