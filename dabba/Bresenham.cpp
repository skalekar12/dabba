#include<stdio.h> 
#include<conio.h> 
#include<graphics.h> 
int main(){ 
int gd = DETECT,gm; 
initgraph(&gd, &gm,""); 
int x1,y1,x2,y2,x,y,P; 
printf("Enter the values of initial coordinates: "); 
scanf("%d%d", &x1, &y1); 
printf("Enter the coordinates for second point: "); 
scanf("%d%d", &x2, &y2); 
 
x = x1; 
y = y1; 
int dx = x2-x1; 
int dy = y2-y1; 
putpixel(x,y,WHITE); 
while(x<=x2 && y<=y2){ 
putpixel(x1,y1,WHITE); 
if(dx!=0) x++; 
 
 
 
if(P<0){ 
P = (2*dy) + P;} 
 
 
else{ 
P =P+(2*dy)-(2*dx); 
if(dy!=0){ 
 
y++;} 
} 
putpixel(x,y,WHITE); 
} 
 
getch(); 
closegraph(); 
 
return 0; 
} 

 
