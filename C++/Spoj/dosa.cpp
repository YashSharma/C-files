#include<iostream>
int main()
{   unsigned long long n;
    scanf("%llu",&n);
    long long a[n],i=0,count=0;
    scanf("%llu",&a[i++]);
    while(i<n)
    {   scanf("%lld",&a[i]);
        
        if((a[i]-a[i-1])<=0)
        { a[i]=a[i-1]+1; count++; }
        i++;
    }
    printf("%llu\n",count);
    return 0;
}