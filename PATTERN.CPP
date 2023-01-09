#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int n,r,c,s;
clrscr();
printf("enter no of rows");
scanf("%d",&n);
while(!kbhit())
{
textcolor(LIGHTRED);
for(r=n;r>=1;r--)
{
for(s=1;s<=n-r;s++)cprintf(" ");
for(c=1;c<=2*r-1;c++){cprintf("*");}
printf("\n");
}
}getch();
}