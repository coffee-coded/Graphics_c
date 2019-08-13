#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void drawcircle(int xc,int yc,int x, int y){
putpixel(xc+x,yc+y,WHITE);
putpixel(xc+x,yc-y,WHITE);
putpixel(xc-x,yc+y,WHITE);
putpixel(xc-x,yc-y,WHITE);
putpixel(xc+y,yc+x,WHITE);
putpixel(xc+y,yc-x,WHITE);
putpixel(xc-y,yc+x,WHITE);
putpixel(xc-y,yc-x,WHITE);
}

void circleb(int xc,int yc,int r){
int x=0,y=r;
int d=3-(2*r);
drawcircle(xc,yc,x,y);
while(y>=x){
x++;
if(d<0)
d=d+(4*x)+6;
else{
d=d+(4*(x-y))+10;
y--;}
drawcircle(xc,yc,x,y);
}
}

void main(){
int gd = DETECT,gm,color;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
int xc,yc,r;
printf("Enter centre of the circle : ");
scanf("%d %d",&xc,&yc);
printf("Enter radius : ");
scanf("%d",&r);
circleb(xc,yc,r);
getch();
}