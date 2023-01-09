#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int n,t,i;
clrscr();
printf("Enter no of table");
scanf("%d",&n);

for(t=1;t<=n;t++)
{
for(i=1;i<=10;i++)
{
printf("%d * %d = %d\n",t,i,t*i);
}
delay(2000); //2000 milliseconds = 1 second
gotoxy(55,60);
}
}
