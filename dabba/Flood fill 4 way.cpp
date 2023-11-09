#include<stdio.h>   

  

#include<graphics.h>  

  

void floodfill4(int x, int y, int old_col, int new_col)  

  

{  

  

if(getpixel(x,y)==old_col)  

  

{  

  

putpixel(x,y,new_col);  

  

floodfill4(x+1,y,old_col,new_col);  

  

floodfill4(x,y+1,old_col,new_col);  

  

floodfill4(x-1,y,old_col,new_col);  

  

floodfill4(x,y-1,old_col,new_col);	  

  

}  

  

}    

  

int main()   

  

{   

  

int gd=DETECT,gm,x=200,y=300,radius=50;   

  

initgraph(&gd,&gm, (char*)"");   

  

circle(x,y,radius);  

  

floodfill4(x,y,0,15);  

  

delay(10000);  

  

getch();  

  

closegraph();  

  

return 0;  

  

} 

