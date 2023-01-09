#include<stdio.h>
#include<conio.h>
struct book
{
char title[30],author[30];
float price;
}b,*p;
void main()
{
p=&b;
clrscr();
printf("Enter book title");gets(b.title);
printf("Enter author name");gets(b.author);
printf("Enter book price");scanf("%f",&b.price);
printf("%s book author %s and price %.2f",b.title,b.author,b.price);
getch();
}