#include<iostream>
int main()
{   unsigned long long t;
    double r;
    scanf("%lld",&t);
    for(int i=1;i<=t;i++)
    {   scanf("%lf",&r);
        printf("Case %d: %.2f\n",i,(4*r*r)+(0.25));
    }
    return 0;
}