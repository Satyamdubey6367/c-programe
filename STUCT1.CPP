#include<stdio.h>
#include<conio.h>
struct stu
{
int id;
float fee;
char name;
}
s1 ;       //global var
void main()
{
struct stu s2;    //local var
clrscr();
printf("id=%d,fee=%.2f,name=%s\n",s1.id,s1.fee,s1.name);
printf("id=%d,fee=%.2f,name=%s\n",s2.id,s2.fee,s2.name);
getch();
}



