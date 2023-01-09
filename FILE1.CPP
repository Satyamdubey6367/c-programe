#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp = fopen("9am.txt","a");
clrscr();
if(fp==NULL)puts("unable to create new file");
else
{
char ch;
puts("Enter ur information");
puts("-------------------------------------------------------");
while((ch=getchar())!=EOF) fputc(ch,fp);
close(fp);
puts("File created");
}
getch();
}