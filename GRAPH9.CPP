#include<graphics.h>
#include<conio.h>
#include<dos.h>

void main()
{
int g=0,gm,i,r=5;
initgraph(&g,&gm,"C:\\TC\\BGI");
for(i=1;i<=45;i++)
{

circle(320,240,r);
delay(500);
r=r+5;
}
getch();

}

