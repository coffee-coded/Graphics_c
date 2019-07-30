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
circle(200,200,	100);
setcolor(RED);
for(i=0;i<100;i++){
circle(200+i,200+i,100);
circle(240+i,170+i,10);
circle(160+i,170+i,10);
line(190+i,210+i,210+i,210+i);
arc(200+i,190+i,215,325,75);
delay(100);
clrscr();
setbkcolor(LIGHTGRAY);
setcolor(RED);}
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
