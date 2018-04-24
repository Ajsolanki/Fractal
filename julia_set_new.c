#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <complex.h>

int main()
{	int gd = DETECT,gm=0;
    initgraph(&gd,&gm,NULL);
    int ec = 4;
        
    int iter = 20,i;
    float zx, zy, cx= -0.1 , cy = 0.5 , qx, qy,tx, ty;
    

    for (zx=-2 ; zx <= 2; zx += 0.1)
    {   
        for (zy = -2; zy <= 2; zy += 0.1)
        {   tx = zx; ty=zy;
            
            for (i=0; i<iter ; i++)
            {
                qx = tx*tx - ty*ty + cx;
                qy = 2*tx*ty + cy;
                tx=qx;ty=qy;
            
                if((qx*qx + qy*qy) > ec)
                    i=21;
                
            }
            
            if(i==20) 
                putpixel(200 + 25*zx, 200 + 25*zy, WHITE);
                             
                    
        } 
    }

    
    getch();
    closegraph();
}