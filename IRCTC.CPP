#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char user[10], pass[19] , cap[20];
clrscr();
printf("enter user name"); scanf("%s", user);
if(strcmp(user,"krish")==0)
{
printf("enter pass word");scanf("%s",pass);
if(strcmp(pass,"Indian")==0)
{
printf("enter captcha");scanf("%s",cap);
if(strcmp(cap,"JBP-19")==0) puts("welcome to IRCTC");
else puts ("invalid captcha");
}
else puts("invalid pass");
}
else puts(" invalid user name");
getch();
}
