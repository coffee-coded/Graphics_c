#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void drawcircle(int xc,int yc, int x, int y){
putpixel(xc+x,yc+y,WHITE);
putpixel(xc+x,yc-y,WHITE);
putpixel(xc-x,yc+y,WHITE);
putpixel(xc-x,yc-y,WHITE);
putpixel(xc+y,yc+x,WHITE);
putpixel(xc+y,yc-x,WHITE);
putpixel(xc-y,yc+x,WHITE);
putpixel(xc-y,yc-x,WHITE);}

void midpointcircle(int xc,int yc, int r){
int x=r,y=0;
drawcircle(xc,yc,x,y);
int P=1-r;
while(x>y){
y++;
if(P<=0)
P=P+(2*y)+1;
else{
x--;
P=P+(2*y)+1-(2*x);}
drawcircle(xc,yc,x,y);}}

void main(){
int gd=DETECT,gm,color,xc,yc,r;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter center of the circle : ");
scanf("%d %d",&xc,&yc);
printf("Enter Radius : ");
scanf("%d",&r);
midpointcircle(xc,yc,r);
getch();}