#include<stdio.h>
#include<conio.h>
void main()
{
long int serno,pre,cur,units;
char name[20];
float amt;
clrscr();
printf("enter service no");scanf("%ld",&serno);
printf("enter consumer name");scanf("%s",name);
printf("enter previous month reading");scanf("%ld",&pre);
printf("enter current month reading");scanf("%ld",&cur);
if(units<=50)amt=units*1.45;
else if(units<=100)
{
amt=50*1.45;
amt=amt+(units-50)*2.8;
}
else if(units<200)
{
amt=50*1.45;
amt=amt+50*2.8;
amt=amt+(units-100)*3.05;
}
else if(units<=300)
{
amt=50*1.45;
amt=amt+50*2.8;
amt=amt+100*3.05;
amt=amt+(units-200)*4.75;
}
else if(units<=500)
{
amt=50*1.45;
amt=amt+50*2.8;
amt=amt+100*3.05;
amt=amt+100*4.75;
amt=amt+(units-300)*6;
}
else
{
amt=50*1.45;
amt=amt+50*2.8;
amt=amt+100*3.05;
amt=amt+100*4.75;
amt=amt+200*6;
amt=amt+(units-500)*6.25;
}
if(amt<67)amt=67;
printf("amount=%.2f",amt);
getch();
}

