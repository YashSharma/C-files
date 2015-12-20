#include<iostream>
#include<math.h>
int main()
{   unsigned long long t;
    long double r1,r2,r3,r4;
    scanf("%llu",&t);
    while(t--)
    {   scanf("%Lf %Lf %Lf",&r1,&r2,&r3);
        r4=(r1*r2*r3)/(r1*r2+r3*r2+r3*r1+2*sqrt(r1*r2*r3*(r1+r2+r3)));
        printf("%6Lf\n",r4);
    }
return 0;
}