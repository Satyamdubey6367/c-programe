#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter a character");
scanf("%c",&ch);
if(ch>='a' && ch<='z')puts("lower case char");
else if(ch>='A'&& ch<='Z')puts("upper case char");
else if(ch>='0' && ch<='9')puts("digit");
else printf("special char");
getch();
}
