#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
void main(){
int gd = DETECT,gm,color;
int i,j;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(LIGHTGRAY);

setcolor(RED);
settextstyle(8,0,2);

for(i=0;i<100;i++){
outtextxy(100,100,"I am the best");
circle(200+i,200+i,100);
circle(240+i,170+i,10);
circle(160+i,170+i,10);
line(190+i,210+i,210+i,210+i);
arc(200+i,190+i,215,325,75);
delay(50);
if(i!=99){
clrscr();}
setbkcolor(LIGHTGRAY);
setcolor(RED);}
delay(10);
circle(190,250,5);
delay(10);
circle(175,230,8);
circle(160,210,10);
circle(140,180,15);
arc(175,10,230,310,150);
getch();
clrscr();
//for(i=0;i<500;i++){
//for(j=0;j<250;j++){
//putpixel(i+j,i,(i+j)%15);
//putpixel(i-j,i,i%15);
//putpixel(i,i,i%15);}
//delay(20);
//}
closegraph();

}
