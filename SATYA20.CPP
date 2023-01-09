#include<stdio.h>
#include<conio.h>
#define p printf
void main()
{
float  sales,besic,da,bonus,commision,gross;
clrscr();
p("enter sales,besic,da,bonus,commision,gross");
scanf("%f %f %f %f %f %f",&sales,&besic,&da,&bonus,&commision,&gross);
gross = besic + da +bonus + commision;
da = besic/100;
p("enter da  %");
scanf("%f",&da);
getch();
}
