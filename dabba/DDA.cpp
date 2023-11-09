#include<stdio.h> 

#include<graphics.h> 

#include<math.h> 

int main() 

{ 

      int x1,x2,y1,y2,dx,dy,step,i,gd=DETECT,gm; 

      initgraph(&gd,&gm,(char*)""); 

       

      float xincr,yincr,x,y; 

      printf("Enter first point: "); 

      scanf("%d %d",&x1,&y1); 

      printf("\nEnter second point: "); 

      scanf("%d %d",&x2,&y2); 

      dx=x2-x1; 

      dy=y2-y1; 

      if(abs(dx)>abs(dy)) { 

            step=dx; 

      } 

      else { 

            step=dy; 

      } 

      xincr=(dx/step); 

      yincr=(dy/step); 

      x=x1; 

      y=y1; 

      putpixel(x,y,WHITE); 

      for(i=0;i<step;i++) 

      { 

      x=x+xincr; 

      y=y+yincr; 

      putpixel(round(x),round(y),WHITE); 

    } 

      getch(); 

      closegraph(); 

      return 0; 

} 
