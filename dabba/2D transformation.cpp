#include<stdio.h>  

#include<conio.h>  

#include<graphics.h>  

#include<math.h>  

void translation() 

{  

int gd=DETECT,gm;  

initgraph(&gd,&gm,(char*)"");  

int x1,y1,x2,y2,x,y;  

int l1,l2,l3,l4;  

printf("ENTER VALUE OF X1,Y1,X2,Y2:"); 

scanf("%d%d%d%d",&x1,&y1,&x2,&y2);  

line(x1,y1,x2,y2);  

printf("ENTER TRANSLATION COORDINATES:");  

scanf("%d%d",&x,&y);  

l1=x1+x;  

l2=y1+y;  

l3=x2+x;  

l4=y2+y;  

line(l1,l2,l3,l4); 

getch();  

closegraph();  

}  

void rotation() 

{  

int gd=DETECT,gm; 

int i; 

int x2,y2,x1,y1,x,y,xn,yn; 

double r11,r12,r21,r22,th; 

printf("Enter the 2 line end points:"); 

scanf("%d%d%d%d",&x1,&y1,&x2,&y2); 

initgraph(&gd,&gm,(char*)""); 

line(x1,y1,x2,y2); 

printf("Enter the angle\n"); 

scanf("%lf",&th); 

r11=cos((th*3.1428)/180); 

r12=sin((th*3.1428)/180); 

r21=(-sin((th*3.1428)/180)); 

r22=cos((th*3.1428)/180); 

xn=((x2*r11)-(y2*r12)); 

yn=((x2*r12)+(y2*r11)); 

line(x1,y1,xn,yn); 

getch(); 

closegraph(); 

}  

void scaling()  

{  

int gd=DETECT,gm;  

initgraph(&gd,&gm,(char*)"");  

int x1,y1,x2,y2,x,y;  

int l1,l2,l3,l4;  

double sx,sy;  

printf("ENTER COORDINATES TO DRAW A LINE:"); 

scanf("%d%d%d%d",&x1,&y1,&x2,&y2);  

line(x1,y1,x2,y2);  

printf("ENTER SCALING FACTOR:"); 

scanf("%lf%lf",&sx,&sy);  

l1=sx*x1;  

l2=sy*y1;  

l3=sx*x2;  

l4=sy*y2;  

line(l1,l2,l3,l4); 

getch();   

closegraph();  

  

}  

int main()  

{  

int ch=0; 

  

  

printf("****2D TRANSFORMATION****\n");  

printf("1:TRANSLATION\n");  

printf("2:ROTATION\n");  

printf("3:SCALING\n");  

printf("4:EXIT\n");  

printf("ENTER YOUR CHOICE:\n");  

scanf("%d",&ch);  

  

  

switch(ch)  

{  

case 1:  

translation(); 

break;  

case 2:  

rotation(); 

break;  

case 3:  

scaling();  

break;  

case 4:  

exit(0);  

break;  

default:  

printf("INVALID CHOICE"); 

}  

 } 

