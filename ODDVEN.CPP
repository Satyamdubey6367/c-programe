#include<stdio.h>
#include<conio.h>
void main()
{
int n,es=0,os=0;
clrscr();
printf("enter n value");
scanf("%d",&n);
while(n>=1)
{
if (n%2==0)es=es+n;
else os=os+n;
n--;
}
printf("even sum=%d,odd sum=%d",es,os);
getch();
}

