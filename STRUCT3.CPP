#include<stdio.h>
#include<conio.h>
void main()
{
struct emp
{
int id;
char name[20];
float sal;
}
e;
clrscr();
printf("enter emp id");scanf("%d",&e.id);
flushall();
printf("Enter emp name");gets(e.name);
printf("enter emp salary");scanf("%f",&e.sal);
printf("emp id= %d,name=%s,sal=%.2f",e.id,e.name,e.sal);
getch();
}