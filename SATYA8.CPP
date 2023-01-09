#include<stdio.h>
#include<conio.h>
void main()
{
float a=1.5;
double b=1.5;
clrscr();
printf("a=%.1f\n",a);
printf("b=%.1lf\n",b);
a=1.0;
b=1.0;
printf("a=%.10f\n",a);
printf("b=%.10lf\n",b);
a=1.2;
b=1.2;
printf("a=%.10f\n",a);
printf("b=%.10f\n",b);
getch();
}


