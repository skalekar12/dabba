#include <stdio.h> 

#include <graphics.h> 

#include <conio.h> 

  

void ellipse(int xr, int yr , int xm, int ym){ 

int dx = (2*yr*yr*0); 

int dy = (2*xr*xr*yr); 

int x = 0; 

int y =yr; 

int p = (yr*yr) - (xr*xr*yr) + ((1/4)*(xr*xr)); 

  

  

while(dx<dy){ 

putpixel(xm + x, ym + y ,WHITE); 

putpixel(xm - x, ym + y ,WHITE); 

putpixel(xm + x, ym - y ,WHITE); 

putpixel(xm - x, ym - y ,WHITE); 

delay(10); 

 

 

if(p<0){ 

x++; 

dx = (2*yr*yr*x); 

p = p + (2*yr*yr*x) + (yr*yr); 

}else{ 

x++; 

y--; 

dx = (2*yr*yr*x); 

dy = (2*xr*xr*y); 

p = p +(2*yr*yr*x) - (2*xr*xr*y) + (yr*yr); 

} 

} 

  

int p1 = (yr*yr*(x+0.5)*(x+0.5)) + (xr*xr*(y-1)*(y-1)) - (xr*xr*yr*yr); 

while(y>=0){ 

putpixel(xm + x, ym + y,WHITE); 

putpixel(xm + x, ym - y,WHITE); 

putpixel(xm - x, ym - y,WHITE); 

putpixel(xm - x, ym + y,WHITE); 

delay(10); 

 

if(p1>0){ 

//x=x; 

y--; 

p1 = p1 - (2*xr*xr*y) + (xr*xr); 

}else{ 

x++; 

y--; 

dy = (2*xr*xr*y); 

dx = (2*yr*yr*x); 

p1 = p1 + (2*yr*yr*x) - (2*xr*xr*y) + (xr*xr); 

} 

} 

 

  

} 

  

int main(){ 

int xr = 0 , yr =0, xm = 0, ym = 0; 

printf("Enter x coordinate of midpoint: "); 

scanf("%d", &xm); 

printf("Enter the y coordinate of midpoint: "); 

scanf("%d",&ym); 

printf("Enter x radius = "); 

scanf("%d",&xr); 

printf("Enter y radius = "); 

scanf("%d",&yr); 

int gd = DETECT, gm; 

    initgraph(&gd, &gm,(char*)""); 

ellipse(xr,yr,xm,ym); 

    getch(); 

    closegraph(); 

     

    return 0; 

} 
