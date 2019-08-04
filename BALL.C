#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
//our first project
char p[10000];
int t;
void check(int a,int h,int t)
{
if((a==24 || a+198==24) && h>=410)
{
outtextxy(300,250,"GAME OVER");
sprintf(p,"SCORE = %d",t);
outtextxy(300,270,p);
delay(2000);
exit(0);
}
}
void ckb()
{
while(kbhit())
{
getch();
}
}
main(){
int gd=DETECT,gm,xmax,ymax,y=432,h=432,a=558,b=410;
int t=0;
char p[10000];
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
xmax=getmaxx();
ymax=460;
setbkcolor(LIGHTBLUE);
outtextxy(250,250,"PRESS ANY KEY TO START");
getch();
cleardevice();
setcolor(GREEN);
setfillstyle(SOLID_FILL,GREEN);
rectangle(-50,424,xmax+10,460);
floodfill(-49,423,GREEN);
delay(150);
 
while(a>=-300){
ckb();
while(!kbhit()){
sprintf(p,"SCORE = %d",t);
outtextxy(500,120,p);
t++;
delay(35);
cleardevice();
setcolor(GREEN);
setfillstyle(SOLID_FILL,GREEN);
rectangle(-50,424,xmax+10,460);
floodfill(0,457,GREEN);
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
circle(20,432,10);
floodfill(20,432,WHITE);
setfillstyle(SOLID_FILL,BROWN);
bar3d(a,b,a+15,460,50,1);
bar3d(a+198,b,a+213,460,50,1);
floodfill(a+15,b-1,WHITE);
floodfill(a+213,b-1,WHITE);
floodfill(a+215,415,WHITE);
floodfill(a+17,415,WHITE);
floodfill(a+1,455,WHITE);
check(a,h,t);
a=a-6;
}
while(h>=y-95){
sprintf(p,"SCORE = %d",t);
outtextxy(500,120,p);
t++;
delay(35);
cleardevice();
setcolor(GREEN);
setfillstyle(SOLID_FILL,GREEN);
rectangle(-50,424,xmax+10,460);
floodfill(0,457,GREEN);
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
circle(20,h,10);
floodfill(20,h,WHITE);
setfillstyle(SOLID_FILL,BROWN);
bar3d(a,b,a+15,460,50,1);
bar3d(a+198,b,a+213,460,50,1);
floodfill(a+15,b-1,WHITE);
floodfill(a+213,b-1,WHITE);
floodfill(a+215,425,WHITE);
floodfill(a+17,425,WHITE);
floodfill(a+1,455,WHITE);
check(a,h,t);
a=a-6;
h=h-6;
}
while(h<=y){
sprintf(p,"SCORE = %d",t);
outtextxy(500,120,p);
t++;
delay(35);
cleardevice();
setcolor(GREEN);
setfillstyle(SOLID_FILL,GREEN);
rectangle(-50,424,xmax+10,460);
floodfill(0,457,GREEN);
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
circle(20,h,10);
floodfill(20,h,WHITE);
setfillstyle(SOLID_FILL,BROWN);
bar3d(a,b,a+15,460,50,1);
bar3d(a+198,b,a+213,460,50,1);
floodfill(a+15,b-1,WHITE);
floodfill(a+213,b-1,WHITE);
floodfill(a+215,425,WHITE);
floodfill(a+17,425,WHITE);
floodfill(a+1,455,WHITE);
check(a,h,t);
a=a-6;
h=h+6;
}
if(a<=-300)
y=432,h=432,a=558,b=410;
}
getch();
closegraph();
return 0;
}
