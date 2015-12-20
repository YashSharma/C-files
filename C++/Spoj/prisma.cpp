#include<iostream>
#include<math.h>
int main()
{   double a,v,s,x,angle;
    unsigned long long t,i;
    scanf("%llu",&t);
    while(t--)
    {   scanf("%lf",&v);
        a=pow((4*v),.33333333);
        angle=sin(M_PI/3);
        s=a*a*angle+(6*v)/(a*angle);
        printf("%.10f\n",s);
    }
    return 0;
    
}