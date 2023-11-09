#include<stdio.h> 

#include<graphics.h> 

int stroke() 

{ 

int gd=DETECT,gm; 

initgraph(&gd,&gm,(char*)""); 

line(50,100,80,200); 

line(50,100,20,200); 

line(70,150,35,150); 

line(150,200,150,100); 

arc(150,130,270,90,30); 

delay(10000); 

} 

void bitmapA(int x,int y){ 

int i,j; 

int a[15][15] = { 

{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0}, 

{0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0}, 

{0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0}, 

{0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0}, 

{0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}, 

{0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}, 

{0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}, 

{0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}, 

{0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}, 

{0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}, 

{0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0}, 

{0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}, 

{0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}, 

{0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}, 

{0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}, 

}; 

for(i=0;i<15;i++){ 

for(j=0;j<15;j++){ 

if(a[i][j]==1) 

{ 

putpixel(x+j,y+i,14);} 

} 

} 

} 

void bitmap(){ 

int gd=DETECT,gm; 

initgraph(&gd,&gm,(char*)""); 

int x,y,size; 

printf("Enter the center coordinates: "); 

scanf("%d%d",&x,&y); 

bitmapA(x,y); 

getch(); 

closegraph(); 

} 

int main(){ 

printf("\n1.Stroke method\n2.Bitmap method\n"); 

printf("Enter the choice:"); 

int choice; 

scanf("%d", &choice); 

switch(choice){ 

case 1: 

stroke(); 

break; 

case 2: 

bitmap(); 

break; 

default: 

printf("Incorrect choice"); 

} 

return 0; 

} 

