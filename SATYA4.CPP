#include<stdio.h>
#include<conio.h>
void main()
{
int i=0;
clrscr();
do
{
printf("i=%d\t",i);
}
while(i++);
printf("%d",++i);
getch();
}