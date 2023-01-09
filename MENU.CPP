#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
float a,b;
char op;
start:
clrscr();
printf("enter two numbers");scanf("%f%f",&a,&b);
puts("-----------------------------------------------------------------");
puts("\t\t\tM E N U");
puts("-------------------------------------------------------------------");
puts("\t\t\t + .add");
puts("\t\t\t - .sub");
puts("\t\t\t * .mul");
puts("\t\t\t % .mod");
puts("\t\t\t / .div");
puts("\t\t\t ^ .pow");
puts("\t\t\t E . Exit");
puts("---------------------------------------------------------------------");
flushall();
printf("\t\t\tEnter ur option[]\b\b");scanf("%c",&op);
gotoxy(60,18);
switch(op)
{
case'+':printf("sum=%.2f",a+b);break;
case'-':printf("sub=%.2f",a-b);break;
case'*':printf("mul=%.2f",a*b);break;
case'%':printf("mod=%.2f",fmod(a,b));break;
case'/':printf("div=%.2f",a/b);break;
case'^':printf("pow=%.2f",pow(a,b));break;
case'E':case'e':exit(0);
default:puts("invalid oprator");
}
getch();
goto start;
}




