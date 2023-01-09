#include<Stdio.h>
#include<conio.h>
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
}
getch();
}