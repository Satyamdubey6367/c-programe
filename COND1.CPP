#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter a,b num");
scanf("%d  %d",&a,&b);
printf("%d is big/n",a>b?a:b);
puts(a>b ?"ais big":"b is big");
