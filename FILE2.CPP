#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp = fopen("9am.txt","r");
clrscr();
if(fp==NULL)puts("File not found");
else
{
char ch;
puts(" ur information");
puts("-------------------------------------------------------");
while((ch=fgetc(fp))!=EOF) putchar(ch);
close(fp);
}

getch();
}