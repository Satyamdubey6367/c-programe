#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
int gd=0,gm ,xr=320,yr=20,touch=0,s=1000;
initgraph(&gd,&gm,"C:\\TC\\BGI");
while(!kbhit())
{
sound(s);
setcolor(random(16));
ellipse(360,260,0,90,xr,yr);
ellipse(360,260,180,270,xr,yr);
if(touch==0) {  xr=xr-10;yr=yr+10; if(yr>=240)touch=1;s+=30;}
else{xr=xr+10;yr=yr-10;if(yr<=20) touch=0;s-=30;}
delay(100);
}
nosound();
}

