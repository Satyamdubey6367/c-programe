#include<stdio.h>
#include<conio.h>
struct stu
{
int id,sub[6];
char name[20];
};
void main()
{
struct stu s;
int tot=0,pass=1,i;
float avg;
clrscr();
printf("ENTER STU ID");
scanf("%d",&s.id);
flushall();
printf("Enter stu name");gets(s.name);
printf("Enter 6 sub marks");
for(i=0;i<6;i++)
{
scanf("%d",&s.sub[i]);
tot=tot+s.sub[i];
if(s.sub[i]<35)pass=0;
}
avg=tot/6.0;
puts("id\tName\tTotal\tAvg\tResult");
puts(-------------------------------------------------------------");
printf("%d\t%s\t%d\t%.2f\t",s.id,s.name,tot,avg);
if(pass==1)puts("passed");else puts("failed");
getch();
}
