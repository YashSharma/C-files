#include<iostream>
int main()
{ long long a[3];
    scanf("%lld %lld %lld",&a[0],&a[1],&a[2]);
    while(a[0]!=0 || a[1]!=0 || a[2]!=0)
    {   if((a[1]*a[1])==(a[2]*a[0]))
        {   printf("GP %lld\n",a[2]*a[2]/a[1]);
        }else
        {   printf("AP %lld\n",2*a[2]-a[1]);
        }
        scanf("%lld %lld %lld",&a[0],&a[1],&a[2]);
    }
    return 0;
}