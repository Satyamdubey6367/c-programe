#include<stdio.h>
#include<conio.h>
struct stu
{
int id;
char name[20];
float fee;
} s;
struct empty
{
}
e;
void main()
{
clrscr();
printf(" stu size=%d,empty size=%d",sizeof(s),sizeof(e));
getch();
}


//output --20+4+2=26
//E=0