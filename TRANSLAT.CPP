#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void translateRect(int P[],int T[]){

//printf("==Original==");
rectangle(P[0],P[1],P[2],P[3]);
setcolor(YELLOW);
P[0] += T[0];
P[1] +=T[1];
P[2] +=T[0];
P[3] +=T[1];
rectangle(P[0],P[1],P[2],P[3]);

}

void main(){
int gd = DETECT,gm,color;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(BROWN);
setcolor(WHITE);
int xl,yl,xr,yr;
printf("======Rectangle======\n");
printf("Coordinates for left top : ");
scanf("%d %d",&xl,&yl);
printf("Coordinates for right bottom : ");
scanf("%d %d",&xr,&yr);
int P[4] = {xl,yl,xr,yr};
int T[2];
printf("Translation matrix : ");
scanf("%d %d",&T[0],&T[1]);
printf("===Coordinate Matrix===\n");
printf("%d\t%d\n",P[0],P[1]);
printf("%d\t%d\n",P[0],P[3]);
printf("%d\t%d\n",P[2],P[1]);
printf("%d\t%d\n",P[2],P[3]);
printf("===Translated Matrix===\n");
printf("%d\n",T[0]);
printf("%d\n",T[1]);
translateRect(P,T);
getch();
}
