#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct stu
{
int id;
char name[20];
}s;
FILE *fp,*t;
int idno,found,op;
char ch,sname[20];
void line()
{
puts("------------------------------------------------------");
}
void newstu();
void enquary();
void report();
void update();
void delete();
void main()
{
clrscr();
line();
puts("\t\tSTUDENTS ENROLLMENT SYSTEM");
line();
puts("\t\t\t1.New stu");
puts("\t\t\t2.Enquiry");
puts("\t\t\t3.Report");
puts("\t\t\t4.Update");
puts("\t\t\t5.Delete");
puts("\t\t\t6.Exit");
line();
printf("\t\t\tENTER Your option[]\b\b");
scanf("%d",&op);
switch(op)
{
case1:newstu();break;
case2:ebquiry();break;
case3:Report();break;
case4:Delete();break;
case5:Delete();break;
case6:exit(0);
default:outs("invalid option");
}
getch();
main();
}
void newstu()
{
clrscr();
fp=fopen("9am.dat","a");
while(1)
{
printf("Enter stuid name");
scanf("%d %s",&s.id,s.name);
fwrite(&s,sizeof(s),1,fp);
puts("one row created");
flushall();
printf("Do you want to continue[y/n]");
scanf("%c",&ch);
if(ch!='y'&&ch!='y')break;
}
fclose(fo);
}
void enquiry()
{
clrscr();
found=0;
fp=fopen("9am.dat","r");
puts("1.id wise");
puts("2.Name wish");
line();
printf("Enter your option:);
scanf("%d",&op);
if(op==1)
{
printf("Enter stuid to search");
scanf("%d",&idno);
fread(&s,sizeof(s),1,fp);
while(!feof(fp))
{
if(idno==s.id)
{
found=1;
puts("id/tName");
line();
printf("%d/t%s\n",s.id,s.name);
break;
}
fread(&s,sizeof(s)1,fp);
}
}
else if(op==2)
{
printf("Enter stu name to search");
scanf("%s",sname);
fread(&s,sizeof(s),1,fp);
while(!feof(fp))
{
if(stricmp(sname,s.name)==0)
{
found=1;
puts("id\tNmae");
line();
printf("%d\t5s\n",s.id,s.name);
break;
}
fread(&s,sizeof(s),1,fp);
}
fclose(fp);
if(found==0)printf("stu not found");
}
void report()
{
clrscr();
fp=fopen("9am.dat","r");
puts("id\tNmae");
line();
fread(&s,sizeof(s),1,fp);
while(!feof(fp))
{
printf("%d\t%s\n",s.id,s.name);
fread(&s,sizeof(s),1,fp);
}
fclose(fp);
}
void update()
{
clrscr();
fp=fopen("9am.dat","r+");
found=0;
printf("Enter stu id to update");
scanf("%",&idno);
fread(&s,sizeof(s),1,fp);
while(!feof(fp))
{
if(idno==s.id)
{
found=1;
puts("id\tName');
line();
printf("%d\t%s\n",s.id,s.name);
printf("Enter new id,nmae");
scanf("%d%s",&s.id,s.name);
fseek(fp,ftell(fp)-sizeof(s),0);
fwrite(&s,sizeof(s),1,fp);
puts("one row update");
break;
}
fread(&s,sizeof(s),1,fp);
}
fclose(fp);
if(found==0)puts("stu not found");
}
void delete()
{
clrscr();
fp=fopen("9am.dat","r");
t=fopen("temp","w");
printf("Enter stuid to delete" );
scanf(%d",&idno);
fread(&s,sizeof(s),1,fp);
while9!feof(fp))
{
if(idno==s.id)
{
puts("id\tName");
line();
printf("%d\t%s\n",s.id,s.name);
found=1;
}
else fwrite(&s,sizeof(s),1,t);
fread(&s,sizeof(s),1,fp);
}
fclose(fp);
fclose(t);
if(found==0)puts("stu not found");
else
{
flushall();
printf("R u sure to delete[y/n]");
scanf("%c",&ch);
if(ch=='y'||ch=='y')
{
remove("9am.dat");
rename("temp","9am.dat");
puts("one row delete");
}
else puts("operation cancelled");
}
}






