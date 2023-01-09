#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int n,i,*p;
clrscr();
printf("enter array size");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
printf("Enter %d integers");
for(i=0;i<n;i++)scanf("%d",p+i);
printf("Element are");
for(i=0;i<n;i++)printf("%4d",*(p+i));
free(p); p= NULL;
getch();
}
