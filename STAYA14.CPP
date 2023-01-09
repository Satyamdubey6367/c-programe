#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();

printf("enter a no");
scanf("%d\n",&n);
if((n&1)==0)puts("even"); else puts("odd");
getch();
}
/*without using arthmetic oprator*/