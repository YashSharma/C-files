#include<iostream>
unsigned long long int calc(unsigned long long n)
{   int arr[105],i=0,k=0;
    while(n)
    {   arr[i++]=n%2;
        n=n/2;
    }
    while(i--)
    {   n+=arr[i]*(1<<k);
        k++;
    }
    return n;
}
int main()
{   unsigned long long t,n;
    scanf("%llu",&t);
    while(t--)
    {   scanf("%llu",&n);
    
    if(n&1)
        printf("%llu\n",n);
    else
        printf("%llu\n",calc(n));
    
    }
    
}