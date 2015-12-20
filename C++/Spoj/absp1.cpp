#include<iostream>
int main()
{   unsigned long long i,t,n;
    scanf("%llu",&t);
    while(t--)
    {   scanf("%llu",&n);
        unsigned long long a[n],sum=0;
        for(i=0;i<n;i++)
        {   scanf("%llu",&a[i]);
            sum+=( (2*i-n+1)*a[i]);
        }
        printf("%llu\n",sum);
    }
    return 0;
}