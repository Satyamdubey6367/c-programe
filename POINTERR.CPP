#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int *p,s1,s2,i;
printf("Enter arrey size");
scanf("%d",&s1);
p= (int*)calloc(s1,sizeof(int));
printf("enter %d integers",s1);
for(i=o;i<s1;i++)scanf("%d",p+1);
printf("enter no of cell to add ");scanf("%d",&s2);
p=(int*)realloc(p,(s1+s2)*size of (int));
printf("enter %d integer",s2);
for(i=s1;i<s1+s2:i++)scanf("%d",p+i);
printf("element are");
for(i=0;i<s1+s2;i++)printf("%4d",*(p+i));
free(p); p=NULL;
getch();
}

