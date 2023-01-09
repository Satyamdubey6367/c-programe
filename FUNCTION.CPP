#include<stdio.h>
#include<conio.h>
void sub()
{
int a,b,sub;
printf("enter any two number");
scanf("%d%d",&a,&b);
sub=a-b;
printf("%d",sub);

}
void sum()
{
int a,b,sum;
printf("enter any two number :");
scanf("%d%d",&a,&b);
sum=a+b;
printf("%d",sum);
}
void main()
{
clrscr();
sum();
printf("HELLO");
sum();
sub();
getch();
}
