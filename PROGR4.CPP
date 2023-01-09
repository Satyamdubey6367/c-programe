#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d;
a=b=c=8;
d= a++ != b++ && ++b != c++;
printf("a=%d,b=%d,c=%d,d=%d",a,b,c,d);
getch();
}
\* outpit a=9,b=9,c=8,d=0

NOTE:-  IN && oprate when left exp flase than right side not cheaked;