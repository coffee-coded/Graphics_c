#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
void main(){
int count,dx,dy,p;
int gd = DETECT,gm,color;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
int x0,x1,y0,y1,x,y;
printf("Enter x0 and y0 : ");
scanf("%d %d",&x0,&y0);
printf("Enter x1 and y1 : ");
scanf("%d %d",&x1,&y1);
if(x1<x0 ||           	y1<y0){
printf("Not possible");
getch();
exit(0);}
count = x1-x0;
dx=count;
dy=y1-y0;
p=2*(dy)-dx;
x=x0;
y=y0;
while(count>0){
putpixel(x,y,WHITE);
if(p<0){
x=x+1;
y=y;
p=p+(2*(dy));}
else{
x=x+1;
y=y+1;
p=p+(2*(dy))-(2*(dx));}
count--;}
getch();}