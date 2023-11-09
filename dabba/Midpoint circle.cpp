#include<stdio.h>    

#include<conio.h>
#include<graphics.h>   
void circle1(int r)  
{
 int x,y,p;  x=0; y=r; p=1-r; while(x<=y)  

{  

if(p<0)  

{  

x++; p=p+(2*x)+1;  

}  

else  

{  

x++;  

y--; p=p+(2*x)-(2*y);  

}  

putpixel(200+x,200+y,WHITE); putpixel(200+x,200-y,WHITE); putpixel(200-x,200-y,WHITE); putpixel(200-x,200+y,WHITE); putpixel(200-y,200+x,WHITE); putpixel(200+y,200+x,WHITE); putpixel(200+y,200-x,WHITE); putpixel(200-y,200+x,WHITE); putpixel(200-y,200-x,WHITE);  

}  

}  

int main()    

{    

int gd=DETECT,gm; initgraph(&gd,&gm,(char*)"");  

int r,p; printf("enter radius of circle:"); scanf("%d",&r);  

circle1(r); getch(); closegraph(); }  
