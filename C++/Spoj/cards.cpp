#include<iostream>
int main()
{     unsigned long long t,n,m=1000007;
    scanf("%llu",&t);
    while(t--)
    {   scanf("%llu",&n);
        printf("%llu\n",((3*n*(n+1)/2)-n)%m);
    }
    return 0;
}