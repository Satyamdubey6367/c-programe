#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
int gd=0,gm ,i,r=5;
initgraph(&gd,&gm,"C:\\TC\\BGI");
for(i=1;i<=30;i++)
{
circle(320,240,r);
delay(100);
r=r+5;
}
getch();
}