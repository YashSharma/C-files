#include<iostream>
#include<math.h>
int main()
{   double n,r,rad;
    scanf("%lf %lf",&r,&n);
    while(r!=0)
    {   rad=r/sin(M_PI/(2*n));
        printf("%.2f\n",rad);
        scanf("%lf %lf",&r,&n);   
    }
    return 0;
}