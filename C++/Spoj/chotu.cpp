#include<iostream>
#include<math.h>
int main()
{   long long t;
    float a,b;
    scanf("%lld",&t);
    while(t--)
    {   scanf("%f %f",&a,&b);
        printf("%0.3f\n",2*sqrt(a*a-b*b));
    }
    return 0;
}