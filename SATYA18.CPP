
#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();

printf("enter a 3digit no");
scanf("%d",&n);
if(n>=10 && n<=999 || n<= -10 && n>= -999) puts("2digit no");
else puts("not a 2digit no");
getch();
}
