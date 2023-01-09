#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stu
{
int id;
char name [20];
}s;
FILE *fp,*t;
int idno,found,op;
char ch,sname[20];
void line();
{
puts("-----------------------");
}
void newstu();
void enquiry();
void report();
void update();
void delete();
void main();
{
clrscr();
line();
puts("\t\t\t1.new stu");
puts("\t\t\t2.enquiry");
puts("\t\t\t3.report");
puts("\t\t\t4.update");
puts("\t\t\t5.delete");
puts("\t\t\t6.Exit");
line();
printf(
