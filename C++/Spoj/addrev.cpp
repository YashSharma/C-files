#include<iostream>
unsigned long long reverse(unsigned long long n)
{   unsigned long long m;
    m=n%10;
    while(n/10)
    {   n=n/10;
        m=m*10+n%10;
    }
    return m;
}
int main()
{   unsigned long long t,a[2],i,sum;
    scanf("%llu",&t);
    while(t--)
    {   sum=0;
        for(i=0;i<2;i++)
        {   scanf("%llu",&a[i]);
            a[i]=reverse(a[i]);
            sum+=a[i];
        }
        printf("%llu\n",reverse(sum));
    }
    
return 0;
}