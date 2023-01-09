#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct stu
{
int id;
char name[20];
}s;
FILE *fp,*t;
int idno,found,op;
char ch,sname[20];
void line()
{
puts("------------------------------------------------------");
}
void newstu();
void enquary();
void report();
void update();
void delete();
void main()
{
clrscr();
line();
puts("\t\tSTUDENTS ENROLLMENT SYSTEM");
line();
puts("\t\t\t1.New stu");
puts("\t\t\t2.Enquiry");
puts("\t\t\t3.Report");
puts("\t\t\t4.Update");
puts("\t\t\t5.Delete");
puts("\t\t\t6.Exit");
line();
printf("\t\t\tENTER Your option[]\b\b");
scanf("%d",&op);
switch(op)
{
case1:newstu();break;
case2:ebquiry();break;
case3:Report();break;
case4:Delete();break;
case5:Delete();break;
case6:exit(0);
default:outs("invalid option");
}
getch();
main();
}
void newstu()
{
clrscr();
fp=fopen("9am.dat","a");
while(1)
{

case5:





