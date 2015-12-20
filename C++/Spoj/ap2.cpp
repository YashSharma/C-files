#include<iostream>
int main()
{   long long t;
    scanf("%lld",&t);
    while(t--)
    {   long long a3,al3,sum,i=0,d,n,a;
        scanf("%lld %lld %lld",&a3,&al3,&sum);
        n=2*sum/(a3+al3);
        printf("%lld\n",n);
        d=(al3-a3)/(n-5);
        a=a3-2*d;
        for(i=0;i<n;i++)
        {   printf("%lld ",a+i*d);
        }
        printf("\n");
    }
    
return 0;
}