#include<graphics.h>
#include<math.h>

int main()
{    int gd=DETECT, gm=0;

  float zx,zy,cx=0.5,cy=0,qx,qy,c,ec=4,tx,ty;
  int iter=20,i;
  initgraph(&gd,&gm,NULL);

  for(zx=-2; zx<=2; zx=zx+0.02)
  { 
    for(zy=-2; zy<=2; zy=zy+0.02)
    {   
         tx = zx;
         ty = zy;      

      for(i=0; i<iter; i++)
       { 
         
	      qx = tx*tx - ty*ty + cx;
	      qy = 2*tx*ty + cy;
        
        tx = qx;
        ty = qy;


        if((qx*qx+qy*qy)>ec)
	      break;
	      }

	      // if(i==20)
	        putpixel(300 + 50*zx, 200 + 50*zy, i);
          
    }
  }
     getch();
     //closegraph();
}


