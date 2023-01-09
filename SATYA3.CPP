#include<stdio.h>
#include<conio.h>
void main()
{
int i=0;
clrscr();
while(i++<=5)
{
printf("%d\t",i);
}
printf("i=%d",++i);
getch();
}