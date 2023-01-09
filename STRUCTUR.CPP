#include<stdio.h>
#include<conio.h>
struct stu         //structure tag name
{
int id;
char name[20];    //Structur member
float fee;
}
s1= {101};

void main()
{
struct stu s2={102};   //structur evar

clrscr();
printf("id=%d,name=%s,fee=%.2f\n",s1.id,s1.name,s1.fee);
printf("id=%d,name=%s,fee=%.2f\n",s2.id,s2.name,s2.fee );
getch();
}


/* output  -- 101,blank.0.00
	      101,blank,0.00*/