#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
float s,area;
clrscr();
printf("enter tha value foe a,b,c");
scanf("%d",&a,&b,&c );
s=(a*b*c)/2.0;
s=s*(s-a)*(s-b)*(s-c);
area= sqrt(s);
printf("area of triangle =%f",area);
getch();
}