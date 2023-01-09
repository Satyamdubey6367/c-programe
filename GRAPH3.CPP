#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
int gd=0,gm ;
initgraph(&gd,&gm,"C:\\TC\\BGI");
while(!kbhit())
{
sound(random(10));
setcolor(random(16));
setbkcolor(random(16));
circle(random(640),random(480),random(100));
delay(60);
}
nosound();
}

