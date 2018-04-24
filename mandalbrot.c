#include<graphics.h>
#include<math.h>
#include<complex.h>

int main()
{ 
    int gd=DETECT, gm=0;
    initgraph(&gd,&gm,NULL);
  
    float zx,zy,ec,n=10;
    ec = pow(2,1.0/(n-1));
    int iter=25,i;
    double complex c,z;

    for(zx=-1*ec; zx<=ec; zx=zx+0.01)
    { 
        for(zy=-1*ec; zy<=ec; zy=zy+0.01)
        {   
            c = zx + I*zy;
            z = 0 + I*0;
            for(i=0; i<iter; i++)
            {         
                z = z*z + c;
                if((creal(z)*creal(z)) + (cimag(z)*cimag(z)) > (ec*ec) )
	                  break;     
	          }
        //if(i==iter)
        putpixel(300 + 100*zx, 200 + 100*zy, i);
        }
    }
    getch();
    closegraph();
}


