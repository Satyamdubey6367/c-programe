#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int id;
char name[20],job[20];
float sal ;
printf("enter emp id");
scanf("%d\n",&id);
printf("enter emp name");
scanf("%s",&name);
printf("enter emp job");
scanf("%s",&job);
printf("enter emp salary");
scanf("%f",&sal);

printf("id=%d,name=%s, job=%s, sal= %f",id,name,job,sal);
getch();
}
