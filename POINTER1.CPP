#include<stdio.h>
#include<conio.h>
void main()
{
int a=100, *p=&a;
clrscr();
printf("a value = %d\n",a);
printf("a addr = %u\n",&a);
printf("p value = %u\n",*p);
printf("a =%d,*p = %d\n",a,*p);
*p=200;
printf("a=%d,*p = %d\n",a,*p);
a=300;
printf("a=%d,*p = %d\n",a,*p);
getch();
}