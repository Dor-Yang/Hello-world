#include "stdio.h"
int main()
    {float x,y;
     printf("input x=");
     scanf("%f",&x);
     if((-5.0<=x&&x<0.0)&&(x!=-2.0))y=1.0/(x+2.0);
     else if(0<=x&&x<5.0)y=1.0/(x+5.0);
     else if(5<=x&&x<10.0)y=1.0/(x+12.0);
     else y=0.0;
printf("x=%e\ny=%e\n",x,y);
return 0;
}
