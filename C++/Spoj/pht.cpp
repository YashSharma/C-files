#include<iostream>
#include<math.h>
int main()
{   unsigned long long n,t,i,l;
    scanf("%llu",&t);
    for(i=0;i<t;i++)
    {   scanf("%llu",&n);
        l=sqrt(n+1)-1;
        printf("Case %llu: %llu\n",i+1,l);
    }
    return 0;
}   