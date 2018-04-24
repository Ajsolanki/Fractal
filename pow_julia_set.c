#include<graphics.h>
#include<math.h>
#include<complex.h>

int main()
{    int gd=DETECT, gm=0;
  
    int iter=20,i,n=2;
   complex t,q,c;
            c = 0.5 + I*(0.8);
    float ec,zx,zy,qx,qy;
        ec = 2;
        //ec = t*t*t + c;
  initgraph(&gd,&gm,NULL);
  
  

  for(zx=-ec; zx<=ec; zx=zx+0.01)
  { 
    for(zy=-ec; zy<=ec; zy=zy+0.01)
    {   
        t = zx + I*zy;      

      for(i=0; i<iter; i++)
       { 
         
	      q = cpow(t,n) + c; 
          t = q;
          qx = creal(q); qy = cimag(q);
                    
          if((qx*qx+qy*qy) > ec*ec)
	            break;
	      }

	      //if(i==20)
	        putpixel(300 + 90*zx, 200 + 94*zy, i);
          
    }
  }
     getch();
     //closegraph();
}


