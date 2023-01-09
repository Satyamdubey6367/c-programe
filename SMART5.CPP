#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter a character");
scanf("%c",&ch);
if(ch>=97 && ch<=122)puts("lower case char");
else if(ch>=65&& ch<=90)puts("upper case char");
else if(ch>=48 && ch<=57)puts("digit");
else printf("special char");
getch();
}
